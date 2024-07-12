// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/OperatingModesRequest
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
#include "interbotix_xs_msgs/OperatingModes.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_OperatingModesRequest_common : public MATLABROSMsgInterface<interbotix_xs_msgs::OperatingModes::Request> {
  public:
    virtual ~interbotix_xs_msgs_msg_OperatingModesRequest_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::OperatingModes::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::OperatingModes::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_OperatingModesRequest_common::copy_from_struct(interbotix_xs_msgs::OperatingModes::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //cmd_type
        const matlab::data::CharArray cmd_type_arr = arr["CmdType"];
        msg->cmd_type = cmd_type_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CmdType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CmdType' is wrong type; expected a string.");
    }
    try {
        //name
        const matlab::data::CharArray name_arr = arr["Name"];
        msg->name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Name' is wrong type; expected a string.");
    }
    try {
        //mode
        const matlab::data::CharArray mode_arr = arr["Mode"];
        msg->mode = mode_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Mode' is wrong type; expected a string.");
    }
    try {
        //profile_type
        const matlab::data::CharArray profile_type_arr = arr["ProfileType"];
        msg->profile_type = profile_type_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ProfileType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ProfileType' is wrong type; expected a string.");
    }
    try {
        //profile_velocity
        const matlab::data::TypedArray<int32_t> profile_velocity_arr = arr["ProfileVelocity"];
        msg->profile_velocity = profile_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ProfileVelocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ProfileVelocity' is wrong type; expected a int32.");
    }
    try {
        //profile_acceleration
        const matlab::data::TypedArray<int32_t> profile_acceleration_arr = arr["ProfileAcceleration"];
        msg->profile_acceleration = profile_acceleration_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ProfileAcceleration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ProfileAcceleration' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_OperatingModesRequest_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::OperatingModes::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CmdType","Name","Mode","ProfileType","ProfileVelocity","ProfileAcceleration"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/OperatingModesRequest");
    // cmd_type
    auto currentElement_cmd_type = (msg + ctr)->cmd_type;
    outArray[ctr]["CmdType"] = factory.createCharArray(currentElement_cmd_type);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["Name"] = factory.createCharArray(currentElement_name);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["Mode"] = factory.createCharArray(currentElement_mode);
    // profile_type
    auto currentElement_profile_type = (msg + ctr)->profile_type;
    outArray[ctr]["ProfileType"] = factory.createCharArray(currentElement_profile_type);
    // profile_velocity
    auto currentElement_profile_velocity = (msg + ctr)->profile_velocity;
    outArray[ctr]["ProfileVelocity"] = factory.createScalar(currentElement_profile_velocity);
    // profile_acceleration
    auto currentElement_profile_acceleration = (msg + ctr)->profile_acceleration;
    outArray[ctr]["ProfileAcceleration"] = factory.createScalar(currentElement_profile_acceleration);
    }
    return std::move(outArray);
  }
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_OperatingModesResponse_common : public MATLABROSMsgInterface<interbotix_xs_msgs::OperatingModes::Response> {
  public:
    virtual ~interbotix_xs_msgs_msg_OperatingModesResponse_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::OperatingModes::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::OperatingModes::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_OperatingModesResponse_common::copy_from_struct(interbotix_xs_msgs::OperatingModes::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_OperatingModesResponse_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::OperatingModes::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/OperatingModesResponse");
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_OperatingModes_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_OperatingModes_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_OperatingModes_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::OperatingModes::Request,interbotix_xs_msgs_msg_OperatingModesRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::OperatingModes::Response,interbotix_xs_msgs_msg_OperatingModesResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          interbotix_xs_msgs_OperatingModes_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::OperatingModes::Request,interbotix_xs_msgs::OperatingModes::Request::ConstPtr,interbotix_xs_msgs_msg_OperatingModesRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::OperatingModes::Response,interbotix_xs_msgs::OperatingModes::Response::ConstPtr,interbotix_xs_msgs_msg_OperatingModesResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          interbotix_xs_msgs_OperatingModes_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<interbotix_xs_msgs::OperatingModes::Request,interbotix_xs_msgs::OperatingModes::Response,interbotix_xs_msgs_msg_OperatingModesRequest_common,interbotix_xs_msgs_msg_OperatingModesResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          interbotix_xs_msgs_OperatingModes_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<interbotix_xs_msgs::OperatingModes,interbotix_xs_msgs::OperatingModes::Request,interbotix_xs_msgs::OperatingModes::Response,interbotix_xs_msgs_msg_OperatingModesRequest_common,interbotix_xs_msgs_msg_OperatingModesResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          interbotix_xs_msgs_OperatingModes_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::OperatingModesRequest,interbotix_xs_msgs_msg_OperatingModesRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::OperatingModesResponse,interbotix_xs_msgs_msg_OperatingModesResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_OperatingModesRequest_common, MATLABROSMsgInterface<interbotix_xs_msgs::OperatingModesRequest>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_OperatingModesResponse_common, MATLABROSMsgInterface<interbotix_xs_msgs::OperatingModesResponse>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_OperatingModes_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
