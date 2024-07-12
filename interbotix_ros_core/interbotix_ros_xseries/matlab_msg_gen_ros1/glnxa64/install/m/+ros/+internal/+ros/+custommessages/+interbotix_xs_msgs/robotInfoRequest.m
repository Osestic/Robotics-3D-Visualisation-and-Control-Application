function [data, info] = robotInfoRequest
%RobotInfo gives an empty data for interbotix_xs_msgs/RobotInfoRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/RobotInfoRequest';
[data.CmdType, info.CmdType] = ros.internal.ros.messages.ros.char('string',0);
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'interbotix_xs_msgs/RobotInfoRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'cmd_type';
info.MatPath{2} = 'name';
