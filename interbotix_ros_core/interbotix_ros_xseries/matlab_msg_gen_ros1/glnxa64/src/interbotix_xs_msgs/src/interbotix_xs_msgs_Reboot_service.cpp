// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/RebootRequest
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
#include "interbotix_xs_msgs/Reboot.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_RebootRequest_common : public MATLABROSMsgInterface<interbotix_xs_msgs::Reboot::Request> {
  public:
    virtual ~interbotix_xs_msgs_msg_RebootRequest_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::Reboot::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::Reboot::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_RebootRequest_common::copy_from_struct(interbotix_xs_msgs::Reboot::Request* msg, const matlab::data::Struct& arr,
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
        //enable
        const matlab::data::TypedArray<bool> enable_arr = arr["Enable"];
        msg->enable = enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Enable' is wrong type; expected a logical.");
    }
    try {
        //smart_reboot
        const matlab::data::TypedArray<bool> smart_reboot_arr = arr["SmartReboot"];
        msg->smart_reboot = smart_reboot_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'SmartReboot' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'SmartReboot' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_RebootRequest_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::Reboot::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CmdType","Name","Enable","SmartReboot"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/RebootRequest");
    // cmd_type
    auto currentElement_cmd_type = (msg + ctr)->cmd_type;
    outArray[ctr]["CmdType"] = factory.createCharArray(currentElement_cmd_type);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["Name"] = factory.createCharArray(currentElement_name);
    // enable
    auto currentElement_enable = (msg + ctr)->enable;
    outArray[ctr]["Enable"] = factory.createScalar(static_cast<bool>(currentElement_enable));
    // smart_reboot
    auto currentElement_smart_reboot = (msg + ctr)->smart_reboot;
    outArray[ctr]["SmartReboot"] = factory.createScalar(static_cast<bool>(currentElement_smart_reboot));
    }
    return std::move(outArray);
  }
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_RebootResponse_common : public MATLABROSMsgInterface<interbotix_xs_msgs::Reboot::Response> {
  public:
    virtual ~interbotix_xs_msgs_msg_RebootResponse_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::Reboot::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::Reboot::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_RebootResponse_common::copy_from_struct(interbotix_xs_msgs::Reboot::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_RebootResponse_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::Reboot::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/RebootResponse");
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_Reboot_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_Reboot_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_Reboot_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::Reboot::Request,interbotix_xs_msgs_msg_RebootRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::Reboot::Response,interbotix_xs_msgs_msg_RebootResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          interbotix_xs_msgs_Reboot_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::Reboot::Request,interbotix_xs_msgs::Reboot::Request::ConstPtr,interbotix_xs_msgs_msg_RebootRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::Reboot::Response,interbotix_xs_msgs::Reboot::Response::ConstPtr,interbotix_xs_msgs_msg_RebootResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          interbotix_xs_msgs_Reboot_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<interbotix_xs_msgs::Reboot::Request,interbotix_xs_msgs::Reboot::Response,interbotix_xs_msgs_msg_RebootRequest_common,interbotix_xs_msgs_msg_RebootResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          interbotix_xs_msgs_Reboot_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<interbotix_xs_msgs::Reboot,interbotix_xs_msgs::Reboot::Request,interbotix_xs_msgs::Reboot::Response,interbotix_xs_msgs_msg_RebootRequest_common,interbotix_xs_msgs_msg_RebootResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          interbotix_xs_msgs_Reboot_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::RebootRequest,interbotix_xs_msgs_msg_RebootRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::RebootResponse,interbotix_xs_msgs_msg_RebootResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_RebootRequest_common, MATLABROSMsgInterface<interbotix_xs_msgs::RebootRequest>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_RebootResponse_common, MATLABROSMsgInterface<interbotix_xs_msgs::RebootResponse>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_Reboot_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
