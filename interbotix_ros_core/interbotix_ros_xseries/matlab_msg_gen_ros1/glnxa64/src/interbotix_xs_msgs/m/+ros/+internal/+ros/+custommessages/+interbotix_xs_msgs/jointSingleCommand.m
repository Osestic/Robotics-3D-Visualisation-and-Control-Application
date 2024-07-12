function [data, info] = jointSingleCommand
%JointSingleCommand gives an empty data for interbotix_xs_msgs/JointSingleCommand
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/JointSingleCommand';
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',0);
[data.Cmd, info.Cmd] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'interbotix_xs_msgs/JointSingleCommand';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'name';
info.MatPath{2} = 'cmd';
