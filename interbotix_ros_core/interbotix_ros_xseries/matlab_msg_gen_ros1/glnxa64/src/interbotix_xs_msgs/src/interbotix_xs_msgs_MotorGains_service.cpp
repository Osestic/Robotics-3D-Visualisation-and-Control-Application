// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/MotorGainsRequest
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
#include "interbotix_xs_msgs/MotorGains.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_MotorGainsRequest_common : public MATLABROSMsgInterface<interbotix_xs_msgs::MotorGains::Request> {
  public:
    virtual ~interbotix_xs_msgs_msg_MotorGainsRequest_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::MotorGains::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::MotorGains::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_MotorGainsRequest_common::copy_from_struct(interbotix_xs_msgs::MotorGains::Request* msg, const matlab::data::Struct& arr,
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
        //kp_pos
        const matlab::data::TypedArray<int32_t> kp_pos_arr = arr["KpPos"];
        msg->kp_pos = kp_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'KpPos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'KpPos' is wrong type; expected a int32.");
    }
    try {
        //ki_pos
        const matlab::data::TypedArray<int32_t> ki_pos_arr = arr["KiPos"];
        msg->ki_pos = ki_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'KiPos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'KiPos' is wrong type; expected a int32.");
    }
    try {
        //kd_pos
        const matlab::data::TypedArray<int32_t> kd_pos_arr = arr["KdPos"];
        msg->kd_pos = kd_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'KdPos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'KdPos' is wrong type; expected a int32.");
    }
    try {
        //k1
        const matlab::data::TypedArray<int32_t> k1_arr = arr["K1"];
        msg->k1 = k1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'K1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'K1' is wrong type; expected a int32.");
    }
    try {
        //k2
        const matlab::data::TypedArray<int32_t> k2_arr = arr["K2"];
        msg->k2 = k2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'K2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'K2' is wrong type; expected a int32.");
    }
    try {
        //kp_vel
        const matlab::data::TypedArray<int32_t> kp_vel_arr = arr["KpVel"];
        msg->kp_vel = kp_vel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'KpVel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'KpVel' is wrong type; expected a int32.");
    }
    try {
        //ki_vel
        const matlab::data::TypedArray<int32_t> ki_vel_arr = arr["KiVel"];
        msg->ki_vel = ki_vel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'KiVel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'KiVel' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_MotorGainsRequest_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::MotorGains::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CmdType","Name","KpPos","KiPos","KdPos","K1","K2","KpVel","KiVel"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/MotorGainsRequest");
    // cmd_type
    auto currentElement_cmd_type = (msg + ctr)->cmd_type;
    outArray[ctr]["CmdType"] = factory.createCharArray(currentElement_cmd_type);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["Name"] = factory.createCharArray(currentElement_name);
    // kp_pos
    auto currentElement_kp_pos = (msg + ctr)->kp_pos;
    outArray[ctr]["KpPos"] = factory.createScalar(currentElement_kp_pos);
    // ki_pos
    auto currentElement_ki_pos = (msg + ctr)->ki_pos;
    outArray[ctr]["KiPos"] = factory.createScalar(currentElement_ki_pos);
    // kd_pos
    auto currentElement_kd_pos = (msg + ctr)->kd_pos;
    outArray[ctr]["KdPos"] = factory.createScalar(currentElement_kd_pos);
    // k1
    auto currentElement_k1 = (msg + ctr)->k1;
    outArray[ctr]["K1"] = factory.createScalar(currentElement_k1);
    // k2
    auto currentElement_k2 = (msg + ctr)->k2;
    outArray[ctr]["K2"] = factory.createScalar(currentElement_k2);
    // kp_vel
    auto currentElement_kp_vel = (msg + ctr)->kp_vel;
    outArray[ctr]["KpVel"] = factory.createScalar(currentElement_kp_vel);
    // ki_vel
    auto currentElement_ki_vel = (msg + ctr)->ki_vel;
    outArray[ctr]["KiVel"] = factory.createScalar(currentElement_ki_vel);
    }
    return std::move(outArray);
  }
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_MotorGainsResponse_common : public MATLABROSMsgInterface<interbotix_xs_msgs::MotorGains::Response> {
  public:
    virtual ~interbotix_xs_msgs_msg_MotorGainsResponse_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::MotorGains::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::MotorGains::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_MotorGainsResponse_common::copy_from_struct(interbotix_xs_msgs::MotorGains::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_MotorGainsResponse_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::MotorGains::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/MotorGainsResponse");
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_MotorGains_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_MotorGains_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_MotorGains_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::MotorGains::Request,interbotix_xs_msgs_msg_MotorGainsRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::MotorGains::Response,interbotix_xs_msgs_msg_MotorGainsResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          interbotix_xs_msgs_MotorGains_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::MotorGains::Request,interbotix_xs_msgs::MotorGains::Request::ConstPtr,interbotix_xs_msgs_msg_MotorGainsRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::MotorGains::Response,interbotix_xs_msgs::MotorGains::Response::ConstPtr,interbotix_xs_msgs_msg_MotorGainsResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          interbotix_xs_msgs_MotorGains_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<interbotix_xs_msgs::MotorGains::Request,interbotix_xs_msgs::MotorGains::Response,interbotix_xs_msgs_msg_MotorGainsRequest_common,interbotix_xs_msgs_msg_MotorGainsResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          interbotix_xs_msgs_MotorGains_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<interbotix_xs_msgs::MotorGains,interbotix_xs_msgs::MotorGains::Request,interbotix_xs_msgs::MotorGains::Response,interbotix_xs_msgs_msg_MotorGainsRequest_common,interbotix_xs_msgs_msg_MotorGainsResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          interbotix_xs_msgs_MotorGains_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::MotorGainsRequest,interbotix_xs_msgs_msg_MotorGainsRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::MotorGainsResponse,interbotix_xs_msgs_msg_MotorGainsResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_MotorGainsRequest_common, MATLABROSMsgInterface<interbotix_xs_msgs::MotorGainsRequest>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_MotorGainsResponse_common, MATLABROSMsgInterface<interbotix_xs_msgs::MotorGainsResponse>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_MotorGains_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
