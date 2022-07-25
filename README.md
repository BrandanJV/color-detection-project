# Color Detection Project


## Overview.
This project consists of a series of nodes using ROS Foxy which enables the AWS DeepRacer to detect either green, yellow or red color and according to the color detected is the reaction of the car. In case of green light it will throttle more, in case of yellow light it will decrease the throttle and in case of red light it will stop.

## Installation.
Follow the next steps to install the Color Detection Project.

### Prerequisites
The Color Detection Project uses the preinstalled packages that come from default in the AWS DeepRacer. For more information about the preinstalled set of packages and libraries on the DeepRacer device, and about installing the required build systems, see [Getting started with AWS DeepRacer OpenSource](https://github.com/aws-deepracer/aws-deepracer-launcher/blob/main/getting-started.md).

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

1. Build packages in the workspace:
        
        cd ~/deepracer_ws/color-detection-project/color_detection_ws/ && colcon build
        

## Use the Color Detection Project:
Follow steps ahead to run the project. Multiple console windows will be opened.

### First console window:
Let's run the color filtering node in the first console window.

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

### Second Console Window:
Let's run the set led color node in the second console window.

1. Switch to root user:

        sudo su
        
1. Source the ROS 2 Foxy setup bash script:

        source /opt/ros/foxy/setup.bash 
        
1. Source the preinstalled packages on your AWS DeepRacer:

        source /opt/aws/deepracer/lib/setup.bash
        
1. Source the setup script for the installed packages:

        source ~/deepracer_ws/color-detection-project/color_detection_ws/install/setup.bash
        
1. Run the led color node:

        ros2 run led_color_pkg led_color_node

### Third Console Window:
Let's run the navigation node in our third and last console window.

1. Switch to root user:

        sudo su
        
1. Source the ROS 2 Foxy setup bash script:

        source /opt/ros/foxy/setup.bash 
        
1. Source the preinstalled packages on your AWS DeepRacer:

        source /opt/aws/deepracer/lib/setup.bash
        
1. Source the setup script for the installed packages:

        source ~/deepracer_ws/color-detection-project/color_detection_ws/install/setup.bash
        
1. Run the color filtering node:

        ros2 run navigation_pkg navigation_color_node
        

## Demo








