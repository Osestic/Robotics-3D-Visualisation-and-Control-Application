function [data, info] = motorGainsRequest
%MotorGains gives an empty data for interbotix_xs_msgs/MotorGainsRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/MotorGainsRequest';
[data.CmdType, info.CmdType] = ros.internal.ros.messages.ros.char('string',0);
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',0);
[data.KpPos, info.KpPos] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.KiPos, info.KiPos] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.KdPos, info.KdPos] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.K1, info.K1] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.K2, info.K2] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.KpVel, info.KpVel] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.KiVel, info.KiVel] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'interbotix_xs_msgs/MotorGainsRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'cmd_type';
info.MatPath{2} = 'name';
info.MatPath{3} = 'kp_pos';
info.MatPath{4} = 'ki_pos';
info.MatPath{5} = 'kd_pos';
info.MatPath{6} = 'k1';
info.MatPath{7} = 'k2';
info.MatPath{8} = 'kp_vel';
info.MatPath{9} = 'ki_vel';
