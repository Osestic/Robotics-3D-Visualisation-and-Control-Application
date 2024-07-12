close all;

% This script commands some arbitrary positions to the arm joints
%
% To get started, open a terminal and type 'roslaunch interbotix_xsarm_control xsarm_control.launch robot_model:=wx250s'
% Then change to this directory in your MATLAB console and type 'joint_position_control'

rosshutdown

bot = InterbotixManipulatorXS("rx200", "arm", "gripper");

% 'going home 1st time'
% bot.arm.go_to_home_pose();
% %pause(2);
% 
% 'going to target joint angles'
% joint_positions=[0 0 0 0 0]*pi/180;
bot.arm.set_joint_positions(joint_positions);
% 'Moving beyond move to target'
% 
% JA=[];
% for ii=1:50
% bot.arm.capture_joint_positions();
% JA(ii,:)=bot.arm.joint_commands'*180/pi;
% pause(0.05)
% end                                  
% JA
% 
% pause(3);
% 
% 'going to 2nd target joint angles'
% joint_positions=[0 0 0 0 0]*pi/180;
% bot.arm.set_joint_positions(joint_positions);
% 'Moving beyond move to target'
% 
% JA=[];
% for ii=1:50
% bot.arm.capture_joint_positions();
% JA(ii,:)=bot.arm.joint_commands'*180/pi;
% pause(0.05)
% end
% JA
% 
% pause(3);
% 
% 'going home 2nd time'
% bot.arm.go_to_home_pose();
% pause(2);

'going to sleep'
bot.arm.go_to_sleep_pose();
pause(2);
JA=[];
for ii=1:50
bot.arm.capture_joint_positions();
JA(ii,:)=bot.arm.joint_commands'*180/pi;
pause(0.05)
end                                  
JA
rosshutdown
bot.stop_timers();
