// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/HexJoy
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#pragma warning(disable : 4068)
#pragma warning(disable : 4245)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "ros/ros.h"
#include "interbotix_xs_msgs/HexJoy.h"
#include "visibility_control.h"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_HexJoy_common : public MATLABROSMsgInterface<interbotix_xs_msgs::HexJoy> {
  public:
    virtual ~interbotix_xs_msgs_msg_HexJoy_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::HexJoy* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::HexJoy* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_HexJoy_common::copy_from_struct(interbotix_xs_msgs::HexJoy* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //world_x_cmd
        const matlab::data::TypedArray<int8_t> world_x_cmd_arr = arr["WorldXCmd"];
        msg->world_x_cmd = world_x_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'WorldXCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'WorldXCmd' is wrong type; expected a int8.");
    }
    try {
        //world_y_cmd
        const matlab::data::TypedArray<int8_t> world_y_cmd_arr = arr["WorldYCmd"];
        msg->world_y_cmd = world_y_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'WorldYCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'WorldYCmd' is wrong type; expected a int8.");
    }
    try {
        //world_yaw_cmd
        const matlab::data::TypedArray<int8_t> world_yaw_cmd_arr = arr["WorldYawCmd"];
        msg->world_yaw_cmd = world_yaw_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'WorldYawCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'WorldYawCmd' is wrong type; expected a int8.");
    }
    try {
        //place_x_cmd
        const matlab::data::TypedArray<int8_t> place_x_cmd_arr = arr["PlaceXCmd"];
        msg->place_x_cmd = place_x_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PlaceXCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PlaceXCmd' is wrong type; expected a int8.");
    }
    try {
        //place_y_cmd
        const matlab::data::TypedArray<int8_t> place_y_cmd_arr = arr["PlaceYCmd"];
        msg->place_y_cmd = place_y_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PlaceYCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PlaceYCmd' is wrong type; expected a int8.");
    }
    try {
        //place_z_cmd
        const matlab::data::TypedArray<int8_t> place_z_cmd_arr = arr["PlaceZCmd"];
        msg->place_z_cmd = place_z_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PlaceZCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PlaceZCmd' is wrong type; expected a int8.");
    }
    try {
        //place_roll_cmd
        const matlab::data::TypedArray<int8_t> place_roll_cmd_arr = arr["PlaceRollCmd"];
        msg->place_roll_cmd = place_roll_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PlaceRollCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PlaceRollCmd' is wrong type; expected a int8.");
    }
    try {
        //place_pitch_cmd
        const matlab::data::TypedArray<int8_t> place_pitch_cmd_arr = arr["PlacePitchCmd"];
        msg->place_pitch_cmd = place_pitch_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PlacePitchCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PlacePitchCmd' is wrong type; expected a int8.");
    }
    try {
        //pose_cmd
        const matlab::data::TypedArray<int8_t> pose_cmd_arr = arr["PoseCmd"];
        msg->pose_cmd = pose_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PoseCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PoseCmd' is wrong type; expected a int8.");
    }
    try {
        //move_type_cmd
        const matlab::data::TypedArray<int8_t> move_type_cmd_arr = arr["MoveTypeCmd"];
        msg->move_type_cmd = move_type_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'MoveTypeCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'MoveTypeCmd' is wrong type; expected a int8.");
    }
    try {
        //gait_toggle_cmd
        const matlab::data::TypedArray<int8_t> gait_toggle_cmd_arr = arr["GaitToggleCmd"];
        msg->gait_toggle_cmd = gait_toggle_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'GaitToggleCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'GaitToggleCmd' is wrong type; expected a int8.");
    }
    try {
        //leg_toggle_cmd
        const matlab::data::TypedArray<int8_t> leg_toggle_cmd_arr = arr["LegToggleCmd"];
        msg->leg_toggle_cmd = leg_toggle_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LegToggleCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LegToggleCmd' is wrong type; expected a int8.");
    }
    try {
        //stance_cmd
        const matlab::data::TypedArray<int8_t> stance_cmd_arr = arr["StanceCmd"];
        msg->stance_cmd = stance_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StanceCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StanceCmd' is wrong type; expected a int8.");
    }
    try {
        //reboot_cmd
        const matlab::data::TypedArray<int8_t> reboot_cmd_arr = arr["RebootCmd"];
        msg->reboot_cmd = reboot_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RebootCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RebootCmd' is wrong type; expected a int8.");
    }
    try {
        //set_home_pose_cmd
        const matlab::data::TypedArray<int8_t> set_home_pose_cmd_arr = arr["SetHomePoseCmd"];
        msg->set_home_pose_cmd = set_home_pose_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'SetHomePoseCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'SetHomePoseCmd' is wrong type; expected a int8.");
    }
    try {
        //speed_cmd
        const matlab::data::TypedArray<int8_t> speed_cmd_arr = arr["SpeedCmd"];
        msg->speed_cmd = speed_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'SpeedCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'SpeedCmd' is wrong type; expected a int8.");
    }
    try {
        //speed_toggle_cmd
        const matlab::data::TypedArray<int8_t> speed_toggle_cmd_arr = arr["SpeedToggleCmd"];
        msg->speed_toggle_cmd = speed_toggle_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'SpeedToggleCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'SpeedToggleCmd' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_HexJoy_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::HexJoy* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","WORLDXINC","WORLDXDEC","WORLDYINC","WORLDYDEC","WORLDYAWCCW","WORLDYAWCW","PLACEXINC","PLACEXDEC","PLACEYINC","PLACEYDEC","PLACEZINC","PLACEZDEC","PLACEROLLCCW","PLACEROLLCW","PLACEPITCHUP","PLACEPITCHDOWN","MOVEHEXAPOD","MOVELEG","HOMEPOSE","SLEEPPOSE","GAITNEXT","GAITPREVIOUS","LEGNEXT","LEGPREVIOUS","WIDENSTANCE","NARROWSTANCE","REBOOTMOTORS","SETHOMEPOSE","SPEEDINC","SPEEDDEC","SPEEDCOURSE","SPEEDFINE","WorldXCmd","WorldYCmd","WorldYawCmd","PlaceXCmd","PlaceYCmd","PlaceZCmd","PlaceRollCmd","PlacePitchCmd","PoseCmd","MoveTypeCmd","GaitToggleCmd","LegToggleCmd","StanceCmd","RebootCmd","SetHomePoseCmd","SpeedCmd","SpeedToggleCmd"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/HexJoy");
    // WORLD_X_INC
    auto currentElement_WORLD_X_INC = (msg + ctr)->WORLD_X_INC;
    outArray[ctr]["WORLDXINC"] = factory.createScalar(static_cast<int8_t>(currentElement_WORLD_X_INC));
    // WORLD_X_DEC
    auto currentElement_WORLD_X_DEC = (msg + ctr)->WORLD_X_DEC;
    outArray[ctr]["WORLDXDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_WORLD_X_DEC));
    // WORLD_Y_INC
    auto currentElement_WORLD_Y_INC = (msg + ctr)->WORLD_Y_INC;
    outArray[ctr]["WORLDYINC"] = factory.createScalar(static_cast<int8_t>(currentElement_WORLD_Y_INC));
    // WORLD_Y_DEC
    auto currentElement_WORLD_Y_DEC = (msg + ctr)->WORLD_Y_DEC;
    outArray[ctr]["WORLDYDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_WORLD_Y_DEC));
    // WORLD_YAW_CCW
    auto currentElement_WORLD_YAW_CCW = (msg + ctr)->WORLD_YAW_CCW;
    outArray[ctr]["WORLDYAWCCW"] = factory.createScalar(static_cast<int8_t>(currentElement_WORLD_YAW_CCW));
    // WORLD_YAW_CW
    auto currentElement_WORLD_YAW_CW = (msg + ctr)->WORLD_YAW_CW;
    outArray[ctr]["WORLDYAWCW"] = factory.createScalar(static_cast<int8_t>(currentElement_WORLD_YAW_CW));
    // PLACE_X_INC
    auto currentElement_PLACE_X_INC = (msg + ctr)->PLACE_X_INC;
    outArray[ctr]["PLACEXINC"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_X_INC));
    // PLACE_X_DEC
    auto currentElement_PLACE_X_DEC = (msg + ctr)->PLACE_X_DEC;
    outArray[ctr]["PLACEXDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_X_DEC));
    // PLACE_Y_INC
    auto currentElement_PLACE_Y_INC = (msg + ctr)->PLACE_Y_INC;
    outArray[ctr]["PLACEYINC"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_Y_INC));
    // PLACE_Y_DEC
    auto currentElement_PLACE_Y_DEC = (msg + ctr)->PLACE_Y_DEC;
    outArray[ctr]["PLACEYDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_Y_DEC));
    // PLACE_Z_INC
    auto currentElement_PLACE_Z_INC = (msg + ctr)->PLACE_Z_INC;
    outArray[ctr]["PLACEZINC"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_Z_INC));
    // PLACE_Z_DEC
    auto currentElement_PLACE_Z_DEC = (msg + ctr)->PLACE_Z_DEC;
    outArray[ctr]["PLACEZDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_Z_DEC));
    // PLACE_ROLL_CCW
    auto currentElement_PLACE_ROLL_CCW = (msg + ctr)->PLACE_ROLL_CCW;
    outArray[ctr]["PLACEROLLCCW"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_ROLL_CCW));
    // PLACE_ROLL_CW
    auto currentElement_PLACE_ROLL_CW = (msg + ctr)->PLACE_ROLL_CW;
    outArray[ctr]["PLACEROLLCW"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_ROLL_CW));
    // PLACE_PITCH_UP
    auto currentElement_PLACE_PITCH_UP = (msg + ctr)->PLACE_PITCH_UP;
    outArray[ctr]["PLACEPITCHUP"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_PITCH_UP));
    // PLACE_PITCH_DOWN
    auto currentElement_PLACE_PITCH_DOWN = (msg + ctr)->PLACE_PITCH_DOWN;
    outArray[ctr]["PLACEPITCHDOWN"] = factory.createScalar(static_cast<int8_t>(currentElement_PLACE_PITCH_DOWN));
    // MOVE_HEXAPOD
    auto currentElement_MOVE_HEXAPOD = (msg + ctr)->MOVE_HEXAPOD;
    outArray[ctr]["MOVEHEXAPOD"] = factory.createScalar(static_cast<int8_t>(currentElement_MOVE_HEXAPOD));
    // MOVE_LEG
    auto currentElement_MOVE_LEG = (msg + ctr)->MOVE_LEG;
    outArray[ctr]["MOVELEG"] = factory.createScalar(static_cast<int8_t>(currentElement_MOVE_LEG));
    // HOME_POSE
    auto currentElement_HOME_POSE = (msg + ctr)->HOME_POSE;
    outArray[ctr]["HOMEPOSE"] = factory.createScalar(static_cast<int8_t>(currentElement_HOME_POSE));
    // SLEEP_POSE
    auto currentElement_SLEEP_POSE = (msg + ctr)->SLEEP_POSE;
    outArray[ctr]["SLEEPPOSE"] = factory.createScalar(static_cast<int8_t>(currentElement_SLEEP_POSE));
    // GAIT_NEXT
    auto currentElement_GAIT_NEXT = (msg + ctr)->GAIT_NEXT;
    outArray[ctr]["GAITNEXT"] = factory.createScalar(static_cast<int8_t>(currentElement_GAIT_NEXT));
    // GAIT_PREVIOUS
    auto currentElement_GAIT_PREVIOUS = (msg + ctr)->GAIT_PREVIOUS;
    outArray[ctr]["GAITPREVIOUS"] = factory.createScalar(static_cast<int8_t>(currentElement_GAIT_PREVIOUS));
    // LEG_NEXT
    auto currentElement_LEG_NEXT = (msg + ctr)->LEG_NEXT;
    outArray[ctr]["LEGNEXT"] = factory.createScalar(static_cast<int8_t>(currentElement_LEG_NEXT));
    // LEG_PREVIOUS
    auto currentElement_LEG_PREVIOUS = (msg + ctr)->LEG_PREVIOUS;
    outArray[ctr]["LEGPREVIOUS"] = factory.createScalar(static_cast<int8_t>(currentElement_LEG_PREVIOUS));
    // WIDEN_STANCE
    auto currentElement_WIDEN_STANCE = (msg + ctr)->WIDEN_STANCE;
    outArray[ctr]["WIDENSTANCE"] = factory.createScalar(static_cast<int8_t>(currentElement_WIDEN_STANCE));
    // NARROW_STANCE
    auto currentElement_NARROW_STANCE = (msg + ctr)->NARROW_STANCE;
    outArray[ctr]["NARROWSTANCE"] = factory.createScalar(static_cast<int8_t>(currentElement_NARROW_STANCE));
    // REBOOT_MOTORS
    auto currentElement_REBOOT_MOTORS = (msg + ctr)->REBOOT_MOTORS;
    outArray[ctr]["REBOOTMOTORS"] = factory.createScalar(static_cast<int8_t>(currentElement_REBOOT_MOTORS));
    // SET_HOME_POSE
    auto currentElement_SET_HOME_POSE = (msg + ctr)->SET_HOME_POSE;
    outArray[ctr]["SETHOMEPOSE"] = factory.createScalar(static_cast<int8_t>(currentElement_SET_HOME_POSE));
    // SPEED_INC
    auto currentElement_SPEED_INC = (msg + ctr)->SPEED_INC;
    outArray[ctr]["SPEEDINC"] = factory.createScalar(static_cast<int8_t>(currentElement_SPEED_INC));
    // SPEED_DEC
    auto currentElement_SPEED_DEC = (msg + ctr)->SPEED_DEC;
    outArray[ctr]["SPEEDDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_SPEED_DEC));
    // SPEED_COURSE
    auto currentElement_SPEED_COURSE = (msg + ctr)->SPEED_COURSE;
    outArray[ctr]["SPEEDCOURSE"] = factory.createScalar(static_cast<int8_t>(currentElement_SPEED_COURSE));
    // SPEED_FINE
    auto currentElement_SPEED_FINE = (msg + ctr)->SPEED_FINE;
    outArray[ctr]["SPEEDFINE"] = factory.createScalar(static_cast<int8_t>(currentElement_SPEED_FINE));
    // world_x_cmd
    auto currentElement_world_x_cmd = (msg + ctr)->world_x_cmd;
    outArray[ctr]["WorldXCmd"] = factory.createScalar(currentElement_world_x_cmd);
    // world_y_cmd
    auto currentElement_world_y_cmd = (msg + ctr)->world_y_cmd;
    outArray[ctr]["WorldYCmd"] = factory.createScalar(currentElement_world_y_cmd);
    // world_yaw_cmd
    auto currentElement_world_yaw_cmd = (msg + ctr)->world_yaw_cmd;
    outArray[ctr]["WorldYawCmd"] = factory.createScalar(currentElement_world_yaw_cmd);
    // place_x_cmd
    auto currentElement_place_x_cmd = (msg + ctr)->place_x_cmd;
    outArray[ctr]["PlaceXCmd"] = factory.createScalar(currentElement_place_x_cmd);
    // place_y_cmd
    auto currentElement_place_y_cmd = (msg + ctr)->place_y_cmd;
    outArray[ctr]["PlaceYCmd"] = factory.createScalar(currentElement_place_y_cmd);
    // place_z_cmd
    auto currentElement_place_z_cmd = (msg + ctr)->place_z_cmd;
    outArray[ctr]["PlaceZCmd"] = factory.createScalar(currentElement_place_z_cmd);
    // place_roll_cmd
    auto currentElement_place_roll_cmd = (msg + ctr)->place_roll_cmd;
    outArray[ctr]["PlaceRollCmd"] = factory.createScalar(currentElement_place_roll_cmd);
    // place_pitch_cmd
    auto currentElement_place_pitch_cmd = (msg + ctr)->place_pitch_cmd;
    outArray[ctr]["PlacePitchCmd"] = factory.createScalar(currentElement_place_pitch_cmd);
    // pose_cmd
    auto currentElement_pose_cmd = (msg + ctr)->pose_cmd;
    outArray[ctr]["PoseCmd"] = factory.createScalar(currentElement_pose_cmd);
    // move_type_cmd
    auto currentElement_move_type_cmd = (msg + ctr)->move_type_cmd;
    outArray[ctr]["MoveTypeCmd"] = factory.createScalar(currentElement_move_type_cmd);
    // gait_toggle_cmd
    auto currentElement_gait_toggle_cmd = (msg + ctr)->gait_toggle_cmd;
    outArray[ctr]["GaitToggleCmd"] = factory.createScalar(currentElement_gait_toggle_cmd);
    // leg_toggle_cmd
    auto currentElement_leg_toggle_cmd = (msg + ctr)->leg_toggle_cmd;
    outArray[ctr]["LegToggleCmd"] = factory.createScalar(currentElement_leg_toggle_cmd);
    // stance_cmd
    auto currentElement_stance_cmd = (msg + ctr)->stance_cmd;
    outArray[ctr]["StanceCmd"] = factory.createScalar(currentElement_stance_cmd);
    // reboot_cmd
    auto currentElement_reboot_cmd = (msg + ctr)->reboot_cmd;
    outArray[ctr]["RebootCmd"] = factory.createScalar(currentElement_reboot_cmd);
    // set_home_pose_cmd
    auto currentElement_set_home_pose_cmd = (msg + ctr)->set_home_pose_cmd;
    outArray[ctr]["SetHomePoseCmd"] = factory.createScalar(currentElement_set_home_pose_cmd);
    // speed_cmd
    auto currentElement_speed_cmd = (msg + ctr)->speed_cmd;
    outArray[ctr]["SpeedCmd"] = factory.createScalar(currentElement_speed_cmd);
    // speed_toggle_cmd
    auto currentElement_speed_toggle_cmd = (msg + ctr)->speed_toggle_cmd;
    outArray[ctr]["SpeedToggleCmd"] = factory.createScalar(currentElement_speed_toggle_cmd);
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_HexJoy_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_HexJoy_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_HexJoy_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::HexJoy,interbotix_xs_msgs_msg_HexJoy_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         interbotix_xs_msgs_HexJoy_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::HexJoy,interbotix_xs_msgs::HexJoy::ConstPtr,interbotix_xs_msgs_msg_HexJoy_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface>
         interbotix_xs_msgs_HexJoy_message::generateRosbagWriterInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::HexJoy,interbotix_xs_msgs_msg_HexJoy_common>>();
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_HexJoy_common, MATLABROSMsgInterface<interbotix_xs_msgs::HexJoy>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_HexJoy_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1