function [data, info] = operatingModesRequest
%OperatingModes gives an empty data for interbotix_xs_msgs/OperatingModesRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/OperatingModesRequest';
[data.CmdType, info.CmdType] = ros.internal.ros.messages.ros.char('string',0);
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',0);
[data.Mode, info.Mode] = ros.internal.ros.messages.ros.char('string',0);
[data.ProfileType, info.ProfileType] = ros.internal.ros.messages.ros.char('string',0);
[data.ProfileVelocity, info.ProfileVelocity] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.ProfileAcceleration, info.ProfileAcceleration] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'interbotix_xs_msgs/OperatingModesRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'cmd_type';
info.MatPath{2} = 'name';
info.MatPath{3} = 'mode';
info.MatPath{4} = 'profile_type';
info.MatPath{5} = 'profile_velocity';
info.MatPath{6} = 'profile_acceleration';
