
classdef JointGroupCommand < ros.Message
    %JointGroupCommand MATLAB implementation of interbotix_xs_msgs/JointGroupCommand
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'interbotix_xs_msgs/JointGroupCommand' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'fa54c229b7238fc905e59a51a526f379' % The MD5 Checksum of the message definition
        PropertyList = { 'Name' 'Cmd' } % List of non-constant message properties
        ROSPropertyList = { 'name' 'cmd' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Name
        Cmd
    end
    methods
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'JointGroupCommand', 'Name');
            obj.Name = char(val);
        end
        function set.Cmd(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'JointGroupCommand', 'Cmd');
            obj.Cmd = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.interbotix_xs_msgs.JointGroupCommand.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.interbotix_xs_msgs.JointGroupCommand(strObj);
        end
    end
end
