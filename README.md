# Robotics-3D-Visualisation-and-Control-Application

![image](https://github.com/user-attachments/assets/696e186a-bffb-4e97-a1d6-2e309a2bbebc)
![Screenshot 2024-03-05 152304](https://github.com/user-attachments/assets/df1462ee-29e6-4451-8a4d-bda22c298c5b)

![Screenshot 2024-07-10 054808](https://github.com/user-attachments/assets/c65605f8-efa8-46f4-8e0b-2bbac7d23dee)


## Description
Throughout my Robotics course, MENG 4900, all my major Home Work was tied to this larger project of developing a Robotics 3D Visualisation and Control Application. The coming together of Robotics theory, Mechanical engineering design and programming birthed this awesome project. I did not achieve this alone but with my partner, [Ziyuan Zhao ](https://www.linkedin.com/in/ziyuan-zhao-89195326b/) and with the guidance and assistance of the instructor of the course, [Professor Jonathan Weaver](https://www.linkedin.com/in/jonathanmweaver/)

Through the mathematics, physics and engineering theory of Robotics such as Denavit–Hartenberg parameters and Inverse Kinematics derived manuallu, the simulation of the Interbotix Robotic Arm was brought to life using MATLAB, ROS and Appdesigner after being measured by hand and designed with SolidWorks. You can see and interact with the 3D model of Interbotix Robotic arm on my website:[oriekaose.com/design-portfolio/#interbotix](https://oriekaose.com/design-portfolio/#interbotix) 

## Set up & Installation
1. Obtain a LINUX PC. We used Ubuntu.
2.	Install MATLAB-ROS Interface [docs.trossenrobotics.com/interbotix_xsarms_docs/ros_interface/ros1/software_setup.html].(https://docs.trossenrobotics.com/interbotix_xsarms_docs/ros_interface/ros1/software_setup.html).
3.	Install the project's contents in ```interbotix_ws\src in the MATLAB-ROS interface installation```.
4. Connect the Interbotix Robot to the PC.

## Programmed With

[![My Skills](https://skillicons.dev/icons?i=matlab)](https://skillicons.dev)


## Usage
1. Run ```HW8_update.mlapp``` from "interbotix_ws\srcn\interbotix_ros_manipulators\interbotix_ros_xsarms\examples\matlab_demos\HW7\" in the location of your MATLAB-ROS interface installation
2. The Appdesigner will appear similar to the one below, press the initialise button for the hidden aspects to show. This is essential to prevent you from trying to perform an action that can not occur
   until the Robot and the 3D simulation are set and initialised.
This depicts my view as the developer of the application. You won't see the hidden part till the ```Initialise``` button is pressed.


![Screenshot 2024-07-10 054808](https://github.com/user-attachments/assets/f334d743-f5d4-4edb-9daa-27b22be2da8b)
4. With this application you can:
   • Enables users to control the joints of the robot independently with sliders or by setting each angle by typing in it directly in the input fields. The gripper can also be opened and closed.
   • Different numbers of joints and all joints can be set to different positions simultaneously by indicating in the input fields.
   • The robot can be taught different positions & sequences of movements with different speeds and accelerations in a relaxed state with the application with Stored ```Joints Value table``` by using the ```relax``` and ```Store Points```  button. Energise the robot after relaxing it for your purposes.
   • Joint positions including the movement and acceleration time can be exported and imported with files. 
   • You can choose to see only the 3D Animation simulation before controlling the robot and seeing the corresponding simulation with the ```Play``` button.
   • The Transformation matrix is displayed at every point in which the Robot is moving, and the Inverse Kinematics table can be calculated by pressing the respective button. From Robotics theory, different angles can have the same Transformation matrix. However, practically, the Robot may not be able to move to those positions obtained from the Inverse Kinematics without damaging itself.
   • Angles calculated from Inverse Kinematics can be moved by specifying the specific solution in the ```Move to Solution```  field. Non-feasible angles will be highlighted in red. For the Transformation matrix with infinite solutions, it will be displayed in the status bar.
   • The are buttons for the Sleep and Home button

Note:
• At all times, the exact position is being drawn and simulated in real-time by the application. This was not a mandated requirement for the project.
Nevertheless, my partner and I did so regardless.
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

