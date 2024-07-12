function [data, info] = jointTemps
%JointTemps gives an empty data for interbotix_xs_msgs/JointTemps
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/JointTemps';
[data.Names, info.Names] = ros.internal.ros.messages.ros.char('string',NaN);
[data.Temps, info.Temps] = ros.internal.ros.messages.ros.default_type('int32',NaN);
info.MessageType = 'interbotix_xs_msgs/JointTemps';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'names';
info.MatPath{2} = 'temps';
