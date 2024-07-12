// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/TurretJoy
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
#include "interbotix_xs_msgs/TurretJoy.h"
#include "visibility_control.h"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_TurretJoy_common : public MATLABROSMsgInterface<interbotix_xs_msgs::TurretJoy> {
  public:
    virtual ~interbotix_xs_msgs_msg_TurretJoy_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::TurretJoy* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::TurretJoy* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_TurretJoy_common::copy_from_struct(interbotix_xs_msgs::TurretJoy* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //pan_cmd
        const matlab::data::TypedArray<int8_t> pan_cmd_arr = arr["PanCmd"];
        msg->pan_cmd = pan_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PanCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PanCmd' is wrong type; expected a int8.");
    }
    try {
        //tilt_cmd
        const matlab::data::TypedArray<int8_t> tilt_cmd_arr = arr["TiltCmd"];
        msg->tilt_cmd = tilt_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TiltCmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TiltCmd' is wrong type; expected a int8.");
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
  MDArray_T interbotix_xs_msgs_msg_TurretJoy_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::TurretJoy* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","PANCCW","PANCW","TILTUP","TILTDOWN","PANTILTHOME","SPEEDINC","SPEEDDEC","SPEEDCOURSE","SPEEDFINE","PanCmd","TiltCmd","SpeedCmd","SpeedToggleCmd"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/TurretJoy");
    // PAN_CCW
    auto currentElement_PAN_CCW = (msg + ctr)->PAN_CCW;
    outArray[ctr]["PANCCW"] = factory.createScalar(static_cast<int8_t>(currentElement_PAN_CCW));
    // PAN_CW
    auto currentElement_PAN_CW = (msg + ctr)->PAN_CW;
    outArray[ctr]["PANCW"] = factory.createScalar(static_cast<int8_t>(currentElement_PAN_CW));
    // TILT_UP
    auto currentElement_TILT_UP = (msg + ctr)->TILT_UP;
    outArray[ctr]["TILTUP"] = factory.createScalar(static_cast<int8_t>(currentElement_TILT_UP));
    // TILT_DOWN
    auto currentElement_TILT_DOWN = (msg + ctr)->TILT_DOWN;
    outArray[ctr]["TILTDOWN"] = factory.createScalar(static_cast<int8_t>(currentElement_TILT_DOWN));
    // PAN_TILT_HOME
    auto currentElement_PAN_TILT_HOME = (msg + ctr)->PAN_TILT_HOME;
    outArray[ctr]["PANTILTHOME"] = factory.createScalar(static_cast<int8_t>(currentElement_PAN_TILT_HOME));
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
    // pan_cmd
    auto currentElement_pan_cmd = (msg + ctr)->pan_cmd;
    outArray[ctr]["PanCmd"] = factory.createScalar(currentElement_pan_cmd);
    // tilt_cmd
    auto currentElement_tilt_cmd = (msg + ctr)->tilt_cmd;
    outArray[ctr]["TiltCmd"] = factory.createScalar(currentElement_tilt_cmd);
    // speed_cmd
    auto currentElement_speed_cmd = (msg + ctr)->speed_cmd;
    outArray[ctr]["SpeedCmd"] = factory.createScalar(currentElement_speed_cmd);
    // speed_toggle_cmd
    auto currentElement_speed_toggle_cmd = (msg + ctr)->speed_toggle_cmd;
    outArray[ctr]["SpeedToggleCmd"] = factory.createScalar(currentElement_speed_toggle_cmd);
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_TurretJoy_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_TurretJoy_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_TurretJoy_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::TurretJoy,interbotix_xs_msgs_msg_TurretJoy_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         interbotix_xs_msgs_TurretJoy_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::TurretJoy,interbotix_xs_msgs::TurretJoy::ConstPtr,interbotix_xs_msgs_msg_TurretJoy_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface>
         interbotix_xs_msgs_TurretJoy_message::generateRosbagWriterInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::TurretJoy,interbotix_xs_msgs_msg_TurretJoy_common>>();
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_TurretJoy_common, MATLABROSMsgInterface<interbotix_xs_msgs::TurretJoy>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_TurretJoy_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1