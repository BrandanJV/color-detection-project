# Led Color of the Color Detection Project

## Overview.
Led Color Package is the package responsible for changing the color of the LED tail lights of the AWS DeepRacer

## Installation.
Follow the next steps to install the led color package.

### Prerequisites
The Color Detection Project uses the preinstalled packages that come from default in the AWS DeepRacer. For more information about the preinstalled set of packages and libraries on the DeepRacer device, and about installing the required build systems, see [Getting started with AWS DeepRacer OpenSource](https://github.com/aws-deepracer/aws-deepracer-launcher/blob/main/getting-started.md).

Follow the next steps as root user to download the project:

### Downloading and building
1. Switch to root user:

        sudo su
        
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
        
        cd ~/deepracer_ws/color-detection-project/color_detection_ws/ && colcon build --packages-select led_color_pkg
        

## Using the Led Color Package:
Open a new terminal and follow the instructions ahead.

1. Switch to root user:

        sudo su
        
1. Source the ROS 2 Foxy setup bash script:

        source /opt/ros/foxy/setup.bash 
        
1. Source the preinstalled packages on your AWS DeepRacer:

        source /opt/aws/deepracer/lib/setup.bash
        
1. Source the setup script for the installed packages:

        source ~/deepracer_ws/color-detection-project/color_detection_ws/install/setup.bash
        
1. Run the color filtering node:

        ros2 run led_color_pkg led_color_node

Now you are running the led color package, responsible for changing the colors in the led tail light of the AWS DeepRacer.


## Node Details

### Led Color Pkg

#### Subscribed Topics
| Topic Name | Message Type | Description |
| ---------- | ------------ | ----------- |
| `Topic` | `ColorFlag`  | Boolean message flag that sets the detected color. |

#### Service 
| Service Name | Service Type | Description |
| ---------- | ------------ | ----------- |
|`servo_pkg/set_led_state` | `SetLedCtrlSrv` | Service called to set the corresponding color |
