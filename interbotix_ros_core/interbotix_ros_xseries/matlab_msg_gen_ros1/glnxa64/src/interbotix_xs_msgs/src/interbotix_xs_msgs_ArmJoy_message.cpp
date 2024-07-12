// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/ArmJoy
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
#include "interbotix_xs_msgs/ArmJoy.h"
#include "visibility_control.h"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_ArmJoy_common : public MATLABROSMsgInterface<interbotix_xs_msgs::ArmJoy> {
  public:
    virtual ~interbotix_xs_msgs_msg_ArmJoy_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::ArmJoy* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::ArmJoy* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_ArmJoy_common::copy_from_struct(interbotix_xs_msgs::ArmJoy* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //ee_x_cmd
        const matlab::data::TypedArray<int8_t> ee_x_cmd_arr = arr["EeXCmd"];
        msg->ee_x_cmd = ee_x_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EeXCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EeXCmd' is wrong type; expected a int8.");
    }
    try {
        //ee_y_cmd
        const matlab::data::TypedArray<int8_t> ee_y_cmd_arr = arr["EeYCmd"];
        msg->ee_y_cmd = ee_y_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EeYCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EeYCmd' is wrong type; expected a int8.");
    }
    try {
        //ee_z_cmd
        const matlab::data::TypedArray<int8_t> ee_z_cmd_arr = arr["EeZCmd"];
        msg->ee_z_cmd = ee_z_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EeZCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EeZCmd' is wrong type; expected a int8.");
    }
    try {
        //ee_roll_cmd
        const matlab::data::TypedArray<int8_t> ee_roll_cmd_arr = arr["EeRollCmd"];
        msg->ee_roll_cmd = ee_roll_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EeRollCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EeRollCmd' is wrong type; expected a int8.");
    }
    try {
        //ee_pitch_cmd
        const matlab::data::TypedArray<int8_t> ee_pitch_cmd_arr = arr["EePitchCmd"];
        msg->ee_pitch_cmd = ee_pitch_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EePitchCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EePitchCmd' is wrong type; expected a int8.");
    }
    try {
        //waist_cmd
        const matlab::data::TypedArray<int8_t> waist_cmd_arr = arr["WaistCmd"];
        msg->waist_cmd = waist_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'WaistCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'WaistCmd' is wrong type; expected a int8.");
    }
    try {
        //gripper_cmd
        const matlab::data::TypedArray<int8_t> gripper_cmd_arr = arr["GripperCmd"];
        msg->gripper_cmd = gripper_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'GripperCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'GripperCmd' is wrong type; expected a int8.");
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
    try {
        //gripper_pwm_cmd
        const matlab::data::TypedArray<int8_t> gripper_pwm_cmd_arr = arr["GripperPwmCmd"];
        msg->gripper_pwm_cmd = gripper_pwm_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'GripperPwmCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'GripperPwmCmd' is wrong type; expected a int8.");
    }
    try {
        //torque_cmd
        const matlab::data::TypedArray<int8_t> torque_cmd_arr = arr["TorqueCmd"];
        msg->torque_cmd = torque_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TorqueCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TorqueCmd' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_ArmJoy_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::ArmJoy* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","EEXINC","EEXDEC","EEYINC","EEYDEC","EEZINC","EEZDEC","EEROLLCCW","EEROLLCW","EEPITCHUP","EEPITCHDOWN","WAISTCCW","WAISTCW","GRIPPEROPEN","GRIPPERCLOSE","HOMEPOSE","SLEEPPOSE","SPEEDINC","SPEEDDEC","SPEEDCOURSE","SPEEDFINE","GRIPPERPWMINC","GRIPPERPWMDEC","TORQUEON","TORQUEOFF","EeXCmd","EeYCmd","EeZCmd","EeRollCmd","EePitchCmd","WaistCmd","GripperCmd","PoseCmd","SpeedCmd","SpeedToggleCmd","GripperPwmCmd","TorqueCmd"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/ArmJoy");
    // EE_X_INC
    auto currentElement_EE_X_INC = (msg + ctr)->EE_X_INC;
    outArray[ctr]["EEXINC"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_X_INC));
    // EE_X_DEC
    auto currentElement_EE_X_DEC = (msg + ctr)->EE_X_DEC;
    outArray[ctr]["EEXDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_X_DEC));
    // EE_Y_INC
    auto currentElement_EE_Y_INC = (msg + ctr)->EE_Y_INC;
    outArray[ctr]["EEYINC"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_Y_INC));
    // EE_Y_DEC
    auto currentElement_EE_Y_DEC = (msg + ctr)->EE_Y_DEC;
    outArray[ctr]["EEYDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_Y_DEC));
    // EE_Z_INC
    auto currentElement_EE_Z_INC = (msg + ctr)->EE_Z_INC;
    outArray[ctr]["EEZINC"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_Z_INC));
    // EE_Z_DEC
    auto currentElement_EE_Z_DEC = (msg + ctr)->EE_Z_DEC;
    outArray[ctr]["EEZDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_Z_DEC));
    // EE_ROLL_CCW
    auto currentElement_EE_ROLL_CCW = (msg + ctr)->EE_ROLL_CCW;
    outArray[ctr]["EEROLLCCW"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_ROLL_CCW));
    // EE_ROLL_CW
    auto currentElement_EE_ROLL_CW = (msg + ctr)->EE_ROLL_CW;
    outArray[ctr]["EEROLLCW"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_ROLL_CW));
    // EE_PITCH_UP
    auto currentElement_EE_PITCH_UP = (msg + ctr)->EE_PITCH_UP;
    outArray[ctr]["EEPITCHUP"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_PITCH_UP));
    // EE_PITCH_DOWN
    auto currentElement_EE_PITCH_DOWN = (msg + ctr)->EE_PITCH_DOWN;
    outArray[ctr]["EEPITCHDOWN"] = factory.createScalar(static_cast<int8_t>(currentElement_EE_PITCH_DOWN));
    // WAIST_CCW
    auto currentElement_WAIST_CCW = (msg + ctr)->WAIST_CCW;
    outArray[ctr]["WAISTCCW"] = factory.createScalar(static_cast<int8_t>(currentElement_WAIST_CCW));
    // WAIST_CW
    auto currentElement_WAIST_CW = (msg + ctr)->WAIST_CW;
    outArray[ctr]["WAISTCW"] = factory.createScalar(static_cast<int8_t>(currentElement_WAIST_CW));
    // GRIPPER_OPEN
    auto currentElement_GRIPPER_OPEN = (msg + ctr)->GRIPPER_OPEN;
    outArray[ctr]["GRIPPEROPEN"] = factory.createScalar(static_cast<int8_t>(currentElement_GRIPPER_OPEN));
    // GRIPPER_CLOSE
    auto currentElement_GRIPPER_CLOSE = (msg + ctr)->GRIPPER_CLOSE;
    outArray[ctr]["GRIPPERCLOSE"] = factory.createScalar(static_cast<int8_t>(currentElement_GRIPPER_CLOSE));
    // HOME_POSE
    auto currentElement_HOME_POSE = (msg + ctr)->HOME_POSE;
    outArray[ctr]["HOMEPOSE"] = factory.createScalar(static_cast<int8_t>(currentElement_HOME_POSE));
    // SLEEP_POSE
    auto currentElement_SLEEP_POSE = (msg + ctr)->SLEEP_POSE;
    outArray[ctr]["SLEEPPOSE"] = factory.createScalar(static_cast<int8_t>(currentElement_SLEEP_POSE));
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
    // GRIPPER_PWM_INC
    auto currentElement_GRIPPER_PWM_INC = (msg + ctr)->GRIPPER_PWM_INC;
    outArray[ctr]["GRIPPERPWMINC"] = factory.createScalar(static_cast<int8_t>(currentElement_GRIPPER_PWM_INC));
    // GRIPPER_PWM_DEC
    auto currentElement_GRIPPER_PWM_DEC = (msg + ctr)->GRIPPER_PWM_DEC;
    outArray[ctr]["GRIPPERPWMDEC"] = factory.createScalar(static_cast<int8_t>(currentElement_GRIPPER_PWM_DEC));
    // TORQUE_ON
    auto currentElement_TORQUE_ON = (msg + ctr)->TORQUE_ON;
    outArray[ctr]["TORQUEON"] = factory.createScalar(static_cast<int8_t>(currentElement_TORQUE_ON));
    // TORQUE_OFF
    auto currentElement_TORQUE_OFF = (msg + ctr)->TORQUE_OFF;
    outArray[ctr]["TORQUEOFF"] = factory.createScalar(static_cast<int8_t>(currentElement_TORQUE_OFF));
    // ee_x_cmd
    auto currentElement_ee_x_cmd = (msg + ctr)->ee_x_cmd;
    outArray[ctr]["EeXCmd"] = factory.createScalar(currentElement_ee_x_cmd);
    // ee_y_cmd
    auto currentElement_ee_y_cmd = (msg + ctr)->ee_y_cmd;
    outArray[ctr]["EeYCmd"] = factory.createScalar(currentElement_ee_y_cmd);
    // ee_z_cmd
    auto currentElement_ee_z_cmd = (msg + ctr)->ee_z_cmd;
    outArray[ctr]["EeZCmd"] = factory.createScalar(currentElement_ee_z_cmd);
    // ee_roll_cmd
    auto currentElement_ee_roll_cmd = (msg + ctr)->ee_roll_cmd;
    outArray[ctr]["EeRollCmd"] = factory.createScalar(currentElement_ee_roll_cmd);
    // ee_pitch_cmd
    auto currentElement_ee_pitch_cmd = (msg + ctr)->ee_pitch_cmd;
    outArray[ctr]["EePitchCmd"] = factory.createScalar(currentElement_ee_pitch_cmd);
    // waist_cmd
    auto currentElement_waist_cmd = (msg + ctr)->waist_cmd;
    outArray[ctr]["WaistCmd"] = factory.createScalar(currentElement_waist_cmd);
    // gripper_cmd
    auto currentElement_gripper_cmd = (msg + ctr)->gripper_cmd;
    outArray[ctr]["GripperCmd"] = factory.createScalar(currentElement_gripper_cmd);
    // pose_cmd
    auto currentElement_pose_cmd = (msg + ctr)->pose_cmd;
    outArray[ctr]["PoseCmd"] = factory.createScalar(currentElement_pose_cmd);
    // speed_cmd
    auto currentElement_speed_cmd = (msg + ctr)->speed_cmd;
    outArray[ctr]["SpeedCmd"] = factory.createScalar(currentElement_speed_cmd);
    // speed_toggle_cmd
    auto currentElement_speed_toggle_cmd = (msg + ctr)->speed_toggle_cmd;
    outArray[ctr]["SpeedToggleCmd"] = factory.createScalar(currentElement_speed_toggle_cmd);
    // gripper_pwm_cmd
    auto currentElement_gripper_pwm_cmd = (msg + ctr)->gripper_pwm_cmd;
    outArray[ctr]["GripperPwmCmd"] = factory.createScalar(currentElement_gripper_pwm_cmd);
    // torque_cmd
    auto currentElement_torque_cmd = (msg + ctr)->torque_cmd;
    outArray[ctr]["TorqueCmd"] = factory.createScalar(currentElement_torque_cmd);
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_ArmJoy_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_ArmJoy_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_ArmJoy_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::ArmJoy,interbotix_xs_msgs_msg_ArmJoy_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         interbotix_xs_msgs_ArmJoy_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::ArmJoy,interbotix_xs_msgs::ArmJoy::ConstPtr,interbotix_xs_msgs_msg_ArmJoy_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface>
         interbotix_xs_msgs_ArmJoy_message::generateRosbagWriterInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::ArmJoy,interbotix_xs_msgs_msg_ArmJoy_common>>();
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_ArmJoy_common, MATLABROSMsgInterface<interbotix_xs_msgs::ArmJoy>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_ArmJoy_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1