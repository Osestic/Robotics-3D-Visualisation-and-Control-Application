# Robotics-3D-Visualisation-and-Control-Application


<img src="https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/assets/42704298/25f37eee-65a8-4e1e-a7c2-306f3ad84e96" width="300"/>

## Description
Throughout my Robotics course, MENG 4900, all my major Home Work was tied to this larger project of developing a Robotics 3D Visualisation and Control Application. The coming together of Robotics theory, Mechanical engineering design and programming birthed this awesome project. I did not achieve this alone but with my partner, [Ziyuan Zhao ](https://www.linkedin.com/in/ziyuan-zhao-89195326b/).

Through the mathematics, physics and engineering theory of Robotics, the simulation of the Interbotix Robotic Arm was brought to life using MATLAB, ROS and Appdesigner after being measured by hand and designed with SolidWorks. You can see and interact with the 3D model of Interbotix Robotic arm on my website:[oriekaose.com/design-portfolio/#interbotix](https://oriekaose.com/design-portfolio/#interbotix) 

## Set up
1. Obtain a LINUX PC.
2.	Install MATLAB-ROS Interface [docs.trossenrobotics.com/interbotix_xsarms_docs/ros_interface/ros1/software_setup.html].(https://docs.trossenrobotics.com/interbotix_xsarms_docs/ros_interface/ros1/software_setup.html).
3.	Install the project's contents in ```interbotix_ws\src in the MATLAB-ROS interface installation```.
4. Connect the Interbotix Robot to the PC.
5.	Run ```HW8_update.mlapp``` from "interbotix_ws\srcn\interbotix_ros_manipulators\interbotix_ros_xsarms\examples\matlab_demos\HW7\" in the location of your MATALB-ROS interface installation

## Programmed With

[![My Skills](https://skillicons.dev/icons?i=matlab)](https://skillicons.dev)


## Installation
There are 2 different folders containing the two major pieces of the project:
- [Microcontroller_Hand](https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/tree/main/Microcontroller_Hand)/

- [Robocontroller_Arm](https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/tree/main/Robocontroller_Arm)/


As the names imply, the former folder contains the code that programs the microcontroller and the UART that sends commands to the robocontroller using C, and the latter contains the code that programs the robocontroller using C++ and python. 

Steps to install the programs:
1. Download the project in [Microcontroller_Hand](https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/tree/main/Microcontroller_Hand)/ and run it on Code Composer studio to install it on a Tiva C Series TM4C123G microcontroller.
2. Download the python project in the [Arm_Position_Capture](https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/tree/main/Robocontroller_Arm/Arm_Position_Capture)/ folder contained in [Robocontroller_Arm](https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/tree/main/Robocontroller_Arm)/ and run it on a Integrated Development Environment (IDE) or text editor that can support Python 2 such as Pycharm.
3. You may need to install a virtual interpreter for Python 2.
4. Run ```PyPose.py``` from the folder which will bring up the Arm position software.
5. Run ```pypose.ino``` on the robocontroller with Arduino 1.8.5 (Do so for all arduino files). This will work with the python software to capture the position of the robot arm by just moving it and pressing the capture button.
6. Run ```main.ino```, and do so with ```poses.h``` being in its same location. This contains the code that interfaces the robocontroller with the microcontroller. You can create more gestures and include the robot commands in it.

## Usage
To run the current capabilities of the WidowX_Arm_HIWONDER_Bionic_Hand-Interface, do the following:
1. Run the ```main.c``` of the project in Code Composer studio to install it on the microcontroller.
2. Run the ```main.ino```.
3. Type in a character that enacts a specific functionality as specificied in the ```main.c``` mentioned.

The following are pictures of the  WidowX_Arm_HIWONDER_Bionic_Hand-Interface in performing different hand positions. 


- Playing the piano:
<img src="https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/assets/42704298/cb93812d-9d59-4cbb-93cf-d6da717aa819">



- Playing rock, paper and scissors:
<img src="https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/assets/42704298/20376c5a-8b07-44d5-b52b-3d32332adce1">

[Video Demo](https://youtu.be/vg_HYsMw0Hg) 

To capture new positions and sequences for the WidowX_Arm_HIWONDER_Bionic_Hand-Interface, do the following:
1. Run the ```PyPose.py```.
2. Run the ```pypose.ino```.
3. Select the maximum resolution, 4096.
4. Select a serial port from the config tab.
5. Select the pose editor from the tools and create a new position.
6. Select capture position.
7. Set can be used to set the position.
8. Select the tools tab and select sequence editor.
9. Load in the positions you have captured and choose the duration you wish for each one.
10. Export the positions and sequences you have created by clicking the export to AVR fromt the tools tab.
11. You can save the application as a file you can always load.

The image of how the pose capturing looks like is shown below:
![Screenshot 2023-12-17 200032](https://github.com/Osestic/WidowX_Arm_HIWONDER_Bionic_Hand-Interface/assets/42704298/a565100c-5b07-490d-9a5a-44bf54016e5d)

 
## Authors
This project was a result of the collaborative effort of:
1. Oriekaose Chukwuyem Agholor - Aspiring Robotics and Mechatronic Systems Engineer [https://github.com/Osestic]
2. Evan Varga - Aspiring Electrical Engineer [https://github.com/EvanVarga]

## License
This project is licensed under the “Commons Clause” License Condition v1.0. See ```LICENSE``` for more information.


## How to Contribute
[![Contributor Covenant](https://img.shields.io/badge/Contributor%20Covenant-2.1-4baaaa.svg)](https://www.contributor-covenant.org/version/2/1/code_of_conduct/)

## Recommendations
- In the ```main.c``` , spend less time in the interrupts
- Include your own gestures and actions
- Allow other persons to view the project
- Act on their feedback accordingly

