function [data, info] = jointTrajectoryCommand
%JointTrajectoryCommand gives an empty data for interbotix_xs_msgs/JointTrajectoryCommand
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/JointTrajectoryCommand';
[data.CmdType, info.CmdType] = ros.internal.ros.messages.ros.char('string',0);
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',0);
[data.Traj, info.Traj] = ros.internal.ros.messages.trajectory_msgs.jointTrajectory;
info.Traj.MLdataType = 'struct';
info.MessageType = 'interbotix_xs_msgs/JointTrajectoryCommand';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,18);
info.MatPath{1} = 'cmd_type';
info.MatPath{2} = 'name';
info.MatPath{3} = 'traj';
info.MatPath{4} = 'traj.header';
info.MatPath{5} = 'traj.header.seq';
info.MatPath{6} = 'traj.header.stamp';
info.MatPath{7} = 'traj.header.stamp.sec';
info.MatPath{8} = 'traj.header.stamp.nsec';
info.MatPath{9} = 'traj.header.frame_id';
info.MatPath{10} = 'traj.joint_names';
info.MatPath{11} = 'traj.points';
info.MatPath{12} = 'traj.points.positions';
info.MatPath{13} = 'traj.points.velocities';
info.MatPath{14} = 'traj.points.accelerations';
info.MatPath{15} = 'traj.points.effort';
info.MatPath{16} = 'traj.points.time_from_start';
info.MatPath{17} = 'traj.points.time_from_start.sec';
info.MatPath{18} = 'traj.points.time_from_start.nsec';
