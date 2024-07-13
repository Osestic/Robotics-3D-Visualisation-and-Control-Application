# Robotics-3D-Visualisation-and-Control-Application
![3DRobot](https://github.com/user-attachments/assets/c0de4073-acce-4efb-acbd-05a8495366c9)

Graphical view of the Robot on MATLAB:


![Screenshot 2024-03-05 152304](https://github.com/user-attachments/assets/df1462ee-29e6-4451-8a4d-bda22c298c5b)

The GUI through which both the Virtual and Real-World Robot Can be Controlled:
![Screenshot 2024-07-10 054808](https://github.com/user-attachments/assets/c65605f8-efa8-46f4-8e0b-2bbac7d23dee)


## Description
Throughout my Robotics course, MENG 4900, all my major Home Work was tied to this larger project of developing a Robotics 3D Visualisation and Control Application. The coming together of Robotics theory, Mechanical engineering design and programming birthed this awesome project. I did not achieve this alone but with my partner, [Ziyuan Zhao ](https://www.linkedin.com/in/ziyuan-zhao-89195326b/) and with the guidance and assistance of the instructor of the course, [Professor Jonathan Weaver](https://www.linkedin.com/in/jonathanmweaver/)

Through the mathematics, physics and engineering theory of Robotics such as Denavit–Hartenberg parameters and Inverse Kinematics derived manually, the simulation of the Interbotix Robotic Arm was brought to life using MATLAB, ROS and Appdesigner after being measured by hand and designed with SolidWorks. You can see and interact with the 3D model of Interbotix Robotic arm on my website:[oriekaose.com/design-portfolio/#interbotix](https://oriekaose.com/design-portfolio/#interbotix) 


![image](https://github.com/user-attachments/assets/696e186a-bffb-4e97-a1d6-2e309a2bbebc)
The 3D Model Rendering produced with SolidWorks
## Set up & Installation
1. Obtain a LINUX PC. We used Ubuntu.
2.	Install MATLAB-ROS Interface.
3.	Install the project's contents in ```interbotix_ws\src in the MATLAB-ROS interface installation```.
4. Connect the Interbotix Robot to the PC.

## Programmed With

[![My Skills](https://skillicons.dev/icons?i=matlab)](https://skillicons.dev)


## Usage
1. Run ```HW8_update.mlapp``` from "interbotix_ws\srcn\interbotix_ros_manipulators\interbotix_ros_xsarms\examples\matlab_demos\HW7\" in the location of your MATLAB-ROS interface installation
2. The Appdesigner will appear similar to the one below, press the initialise button for the hidden aspects to show. This is essential to prevent you from trying to perform an action that can not occur
   until the Robot and the 3D simulation are set and initialised.
This depicts my view as the developer of the application. You won't see the hidden part at all till the ```Initialise``` button is pressed.


![Screenshot 2024-07-10 054808](https://github.com/user-attachments/assets/f334d743-f5d4-4edb-9daa-27b22be2da8b)
3. With this application you can:
   - Enables users to control the joints of the robot and that of its virtual counterpart independently with sliders or by setting each angle by typing in it directly in the input fields. The gripper can also be opened and closed.
   - Different numbers of joints and all joints can be set to different positions simultaneously by indicating in the input fields.
   - The robot and its virtual version can be taught different positions & sequences of movements with different speeds and accelerations in a relaxed state with the application with Stored ```Joints Value table``` by using the ```relax``` and ```Store Points```  button. Energise the robot after relaxing it for your purposes.
   - Joint positions including the movement and acceleration time can be exported and imported with files. 
   - You can choose to see only the 3D Animation simulation before controlling the robot and seeing the corresponding simulation with the ```Play``` button.
   - The Transformation matrix is displayed at every point in which the Robot is moving, and the Inverse Kinematics table can be calculated by pressing the respective button. From Robotics theory, different angles can have the same Transformation matrix. However, practically, the Robot may not be able to move to those positions obtained from the Inverse Kinematics without damaging itself.
   - Angles calculated from Inverse Kinematics can be moved by specifying the specific solution in the ```Move to Solution```  field and hitting ENTER. Non-feasible angles will be highlighted in red. The Transformation matrix with infinite solutions will be indicated in the status bar.
   - There are buttons for the movement to the Sleep and Home positions.
   - Error checking is incorporated such that the robot will only proceeed to the next position as long as it is at the current position specified or within acceptable limits.


** Note: **
At all times, the exact position is being drawn and simulated in real-time by the application. This was not a mandated requirement for the project.
Nevertheless, my partner and I did so regardless.

Both the Virtual and Physical Robots in the same position:


![image](https://github.com/user-attachments/assets/36f1309b-af13-475e-aaa2-1d89139839fe)

### Version 1 of the Robotics 3D Visualisation and Control Application
![image](https://github.com/user-attachments/assets/73b0841c-8664-4b16-be68-688a5bb1c3c3)
[vehicle present](https://www.youtube.com/watch?v=xS1hy-NXCwQ&t=542s&ab_channel=ZiyuanZhao)
It did not have the real-time simulation. Thus, incrementation was used to control joint positions based on user inputs. This could make it slow at times. 
Also, you could only use the sliders to control the robot. It is quite limited compared to the final version.



 
## Authors
This project was a result of the collaborative effort of:
1. Oriekaose Chukwuyem Agholor - Aspiring Robotics and Mechatronic Systems Engineer [https://www.oriekaose.com]
2. Ziyuan Zhao - Robotics and Mechatronic Systems Engineer [https://www.linkedin.com/in/ziyuan-zhao-89195326b/]

## License
This project is licensed under the “Commons Clause” License Condition v1.0. See ```LICENSE``` for more information.


## How to Contribute
[![Contributor Covenant](https://img.shields.io/badge/Contributor%20Covenant-2.1-4baaaa.svg)](https://www.contributor-covenant.org/version/2/1/code_of_conduct/)

## Recommendations
- In the ```main.c``` , spend less time in the interrupts
- Include your own gestures and actions
- Allow other persons to view the project
- Act on their feedback accordingly

