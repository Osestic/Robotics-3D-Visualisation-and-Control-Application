function [data, info] = registerValuesResponse
%RegisterValues gives an empty data for interbotix_xs_msgs/RegisterValuesResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'interbotix_xs_msgs/RegisterValuesResponse';
[data.Values, info.Values] = ros.internal.ros.messages.ros.default_type('int32',NaN);
info.MessageType = 'interbotix_xs_msgs/RegisterValuesResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'values';
