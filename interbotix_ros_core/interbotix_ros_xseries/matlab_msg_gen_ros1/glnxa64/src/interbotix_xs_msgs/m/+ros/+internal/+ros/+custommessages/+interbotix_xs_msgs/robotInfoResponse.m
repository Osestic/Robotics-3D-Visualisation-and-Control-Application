function [data, info] = robotInfoResponse
%RobotInfo gives an empty data for interbotix_xs_msgs/RobotInfoResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/RobotInfoResponse';
[data.Mode, info.Mode] = ros.internal.ros.messages.ros.char('string',0);
[data.ProfileType, info.ProfileType] = ros.internal.ros.messages.ros.char('string',0);
[data.JointNames, info.JointNames] = ros.internal.ros.messages.ros.char('string',NaN);
[data.JointIds, info.JointIds] = ros.internal.ros.messages.ros.default_type('int16',NaN);
[data.JointLowerLimits, info.JointLowerLimits] = ros.internal.ros.messages.ros.default_type('single',NaN);
[data.JointUpperLimits, info.JointUpperLimits] = ros.internal.ros.messages.ros.default_type('single',NaN);
[data.JointVelocityLimits, info.JointVelocityLimits] = ros.internal.ros.messages.ros.default_type('single',NaN);
[data.JointSleepPositions, info.JointSleepPositions] = ros.internal.ros.messages.ros.default_type('single',NaN);
[data.JointStateIndices, info.JointStateIndices] = ros.internal.ros.messages.ros.default_type('int16',NaN);
[data.NumJoints, info.NumJoints] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',NaN);
info.MessageType = 'interbotix_xs_msgs/RobotInfoResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'mode';
info.MatPath{2} = 'profile_type';
info.MatPath{3} = 'joint_names';
info.MatPath{4} = 'joint_ids';
info.MatPath{5} = 'joint_lower_limits';
info.MatPath{6} = 'joint_upper_limits';
info.MatPath{7} = 'joint_velocity_limits';
info.MatPath{8} = 'joint_sleep_positions';
info.MatPath{9} = 'joint_state_indices';
info.MatPath{10} = 'num_joints';
info.MatPath{11} = 'name';
