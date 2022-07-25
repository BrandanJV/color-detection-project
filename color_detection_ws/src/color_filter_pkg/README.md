# Color Filter Package of the Color Detection Project

## Overview.
Color Filtering Package is the package responsible for detecting either, green yellow or red color using the camera in the AWS DeepRacer

## Installation.
Follow the next steps to install the Color Detection Project.

### Prerequisites
The Color Detection Project uses the preinstalled packages that come from default in the AWS DeepRacer. For more information about the preinstalled set of packages and libraries on the DeepRacer device, and about installing the required build systems, see [Getting started with AWS DeepRacer OpenSource](https://github.com/aws-deepracer/aws-deepracer-launcher/blob/main/getting-started.md).

The `color_filter_pkg` depends on the `color-interfaces` package which includes custom message types. 

Follow the next steps as root user to download the project:

### Downloading and building
1. Switch to root user:

        sudo su

1. Stop the `deepracer-core.service` that is currently running on the device:

        systemctl stop deepracer-core
        
1. Source the ROS 2 Foxy setup bash script:

        source /opt/ros/foxy/setup.bash 
        
1. Create a workspace directory for the package:

        mkdir -p ~/deepracer_ws
        cd ~/deepracer_ws
        
1. Clone the project into your deepracer workspace

        git clone git@github.com:BrandanJV/color-detection-project.git
        cd ~/deepracer_ws/color-detection-project/color_detection_ws/
        
1. Fetch Unreleased dependencies: 

        cd ~/deepracer_ws/color-detection-project/color_detection_ws/
        rosws update
        
1. Resolve dependencies:

        cd ~/deepracer_ws/color-detection-project/color_detection_ws/ && apt-get update
        rosdep install -i --from-path . --rosdistro foxy -y

1. Build packages in the workspace:
        
        cd ~/deepracer_ws/color-detection-project/color_detection_ws/ && colcon build --packages-select color_filter_pkg
        

## Using the Color Detection Package:
Follow steps ahead to run the Color Detection Package.

Let's run the color filtering node.

1. Switch to root user:

        sudo su
        
1. Source the ROS 2 Foxy setup bash script:

        source /opt/ros/foxy/setup.bash 
        
1. Source the preinstalled packages on your AWS DeepRacer:

        source /opt/aws/deepracer/lib/setup.bash
        
1. Source the setup script for the installed packages:

        source ~/deepracer_ws/color-detection-project/color_detection_ws/install/setup.bash
        
1. Run the color filtering node:

        ros2 run color_filter_pkg color_filter_node

Now you are running the color detection package which is in charge of apply different masks in order to detect different colors.

## Node Details

### Color Filter Pkg

#### Published Topics
| Topic Name | Message Type | Description |
| ---------- | ------------ | ----------- |
| `Topic` | `ColorFlag`  | Boolean message flag that sets the detected color. |

#### Subscribed Topics
| Topic Name | Message Type | Description |
| ---------- | ------------ | ----------- |
|`camera_pkg/display_mjpeg` | `Image` | Image message that contains digital information from the camera. |
