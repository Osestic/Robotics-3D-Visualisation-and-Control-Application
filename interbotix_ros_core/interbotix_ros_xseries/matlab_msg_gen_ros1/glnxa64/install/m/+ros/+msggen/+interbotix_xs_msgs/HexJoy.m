
classdef HexJoy < ros.Message
    %HexJoy MATLAB implementation of interbotix_xs_msgs/HexJoy
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'interbotix_xs_msgs/HexJoy' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '99b1d8cef626ff2a04f51ab2f81ac80a' % The MD5 Checksum of the message definition
        PropertyList = { 'WorldXCmd' 'WorldYCmd' 'WorldYawCmd' 'PlaceXCmd' 'PlaceYCmd' 'PlaceZCmd' 'PlaceRollCmd' 'PlacePitchCmd' 'PoseCmd' 'MoveTypeCmd' 'GaitToggleCmd' 'LegToggleCmd' 'StanceCmd' 'RebootCmd' 'SetHomePoseCmd' 'SpeedCmd' 'SpeedToggleCmd' } % List of non-constant message properties
        ROSPropertyList = { 'world_x_cmd' 'world_y_cmd' 'world_yaw_cmd' 'place_x_cmd' 'place_y_cmd' 'place_z_cmd' 'place_roll_cmd' 'place_pitch_cmd' 'pose_cmd' 'move_type_cmd' 'gait_toggle_cmd' 'leg_toggle_cmd' 'stance_cmd' 'reboot_cmd' 'set_home_pose_cmd' 'speed_cmd' 'speed_toggle_cmd' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
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
        WORLDXINC = int8(1)
        WORLDXDEC = int8(2)
        WORLDYINC = int8(3)
        WORLDYDEC = int8(4)
        WORLDYAWCCW = int8(5)
        WORLDYAWCW = int8(6)
        PLACEXINC = int8(7)
        PLACEXDEC = int8(8)
        PLACEYINC = int8(9)
        PLACEYDEC = int8(10)
        PLACEZINC = int8(11)
        PLACEZDEC = int8(12)
        PLACEROLLCCW = int8(13)
        PLACEROLLCW = int8(14)
        PLACEPITCHUP = int8(15)
        PLACEPITCHDOWN = int8(16)
        MOVEHEXAPOD = int8(17)
        MOVELEG = int8(18)
        HOMEPOSE = int8(19)
        SLEEPPOSE = int8(20)
        GAITNEXT = int8(21)
        GAITPREVIOUS = int8(22)
        LEGNEXT = int8(23)
        LEGPREVIOUS = int8(24)
        WIDENSTANCE = int8(25)
        NARROWSTANCE = int8(26)
        REBOOTMOTORS = int8(27)
        SETHOMEPOSE = int8(28)
        SPEEDINC = int8(29)
        SPEEDDEC = int8(30)
        SPEEDCOURSE = int8(31)
        SPEEDFINE = int8(32)
    end
    properties
        WorldXCmd
        WorldYCmd
        WorldYawCmd
        PlaceXCmd
        PlaceYCmd
        PlaceZCmd
        PlaceRollCmd
        PlacePitchCmd
        PoseCmd
        MoveTypeCmd
        GaitToggleCmd
        LegToggleCmd
        StanceCmd
        RebootCmd
        SetHomePoseCmd
        SpeedCmd
        SpeedToggleCmd
    end
    methods
        function set.WorldXCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'WorldXCmd');
            obj.WorldXCmd = int8(val);
        end
        function set.WorldYCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'WorldYCmd');
            obj.WorldYCmd = int8(val);
        end
        function set.WorldYawCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'WorldYawCmd');
            obj.WorldYawCmd = int8(val);
        end
        function set.PlaceXCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'PlaceXCmd');
            obj.PlaceXCmd = int8(val);
        end
        function set.PlaceYCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'PlaceYCmd');
            obj.PlaceYCmd = int8(val);
        end
        function set.PlaceZCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'PlaceZCmd');
            obj.PlaceZCmd = int8(val);
        end
        function set.PlaceRollCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'PlaceRollCmd');
            obj.PlaceRollCmd = int8(val);
        end
        function set.PlacePitchCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'PlacePitchCmd');
            obj.PlacePitchCmd = int8(val);
        end
        function set.PoseCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'PoseCmd');
            obj.PoseCmd = int8(val);
        end
        function set.MoveTypeCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'MoveTypeCmd');
            obj.MoveTypeCmd = int8(val);
        end
        function set.GaitToggleCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'GaitToggleCmd');
            obj.GaitToggleCmd = int8(val);
        end
        function set.LegToggleCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'LegToggleCmd');
            obj.LegToggleCmd = int8(val);
        end
        function set.StanceCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'StanceCmd');
            obj.StanceCmd = int8(val);
        end
        function set.RebootCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'RebootCmd');
            obj.RebootCmd = int8(val);
        end
        function set.SetHomePoseCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'SetHomePoseCmd');
            obj.SetHomePoseCmd = int8(val);
        end
        function set.SpeedCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'SpeedCmd');
            obj.SpeedCmd = int8(val);
        end
        function set.SpeedToggleCmd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HexJoy', 'SpeedToggleCmd');
            obj.SpeedToggleCmd = int8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.interbotix_xs_msgs.HexJoy.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.interbotix_xs_msgs.HexJoy(strObj);
        end
    end
end
