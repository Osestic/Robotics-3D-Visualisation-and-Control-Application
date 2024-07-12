
classdef MotorGainsRequest < ros.Message
    %MotorGainsRequest MATLAB implementation of interbotix_xs_msgs/MotorGainsRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'interbotix_xs_msgs/MotorGainsRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '7c362297bf8bae149936ba71305f3900' % The MD5 Checksum of the message definition
        PropertyList = { 'CmdType' 'Name' 'KpPos' 'KiPos' 'KdPos' 'K1' 'K2' 'KpVel' 'KiVel' } % List of non-constant message properties
        ROSPropertyList = { 'cmd_type' 'name' 'kp_pos' 'ki_pos' 'kd_pos' 'k1' 'k2' 'kp_vel' 'ki_vel' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        CmdType
        Name
        KpPos
        KiPos
        KdPos
        K1
        K2
        KpVel
        KiVel
    end
    methods
        function set.CmdType(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'CmdType');
            obj.CmdType = char(val);
        end
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'Name');
            obj.Name = char(val);
        end
        function set.KpPos(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'KpPos');
            obj.KpPos = int32(val);
        end
        function set.KiPos(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'KiPos');
            obj.KiPos = int32(val);
        end
        function set.KdPos(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'KdPos');
            obj.KdPos = int32(val);
        end
        function set.K1(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'K1');
            obj.K1 = int32(val);
        end
        function set.K2(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'K2');
            obj.K2 = int32(val);
        end
        function set.KpVel(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'KpVel');
            obj.KpVel = int32(val);
        end
        function set.KiVel(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MotorGainsRequest', 'KiVel');
            obj.KiVel = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.interbotix_xs_msgs.MotorGainsRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.interbotix_xs_msgs.MotorGainsRequest(strObj);
        end
    end
end
