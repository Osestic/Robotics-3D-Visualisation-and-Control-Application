function [data, info] = rebootRequest
%Reboot gives an empty data for interbotix_xs_msgs/RebootRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/RebootRequest';
[data.CmdType, info.CmdType] = ros.internal.ros.messages.ros.char('string',0);
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',0);
[data.Enable, info.Enable] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.SmartReboot, info.SmartReboot] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'interbotix_xs_msgs/RebootRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'cmd_type';
info.MatPath{2} = 'name';
info.MatPath{3} = 'enable';
info.MatPath{4} = 'smart_reboot';
