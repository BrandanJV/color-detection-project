# Color Interfaces Package of the Color Detection Project

## Overview.
The Color Interfaces Packages is the responsible for sending messages accross the Color Detection Project.

## Installation.
Follow the next steps to install the Color Interfaces Project.

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
        
        cd ~/deepracer_ws/color-detection-project/color_detection_ws/ && colcon build --packages-select color_interfaces
        
