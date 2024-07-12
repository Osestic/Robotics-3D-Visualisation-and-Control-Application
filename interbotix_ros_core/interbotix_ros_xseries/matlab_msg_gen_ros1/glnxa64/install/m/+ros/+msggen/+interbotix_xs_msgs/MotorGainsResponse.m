
classdef MotorGainsResponse < ros.Message
    %MotorGainsResponse MATLAB implementation of interbotix_xs_msgs/MotorGainsResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'interbotix_xs_msgs/MotorGainsResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'd41d8cd98f00b204e9800998ecf8427e' % The MD5 Checksum of the message definition
        PropertyList = {} % List of non-constant message properties
        ROSPropertyList = {} % List of non-constant ROS message properties
        PropertyMessageTypes = {} % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
    end
    methods
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.interbotix_xs_msgs.MotorGainsResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.interbotix_xs_msgs.MotorGainsResponse(strObj);
        end
    end
end
