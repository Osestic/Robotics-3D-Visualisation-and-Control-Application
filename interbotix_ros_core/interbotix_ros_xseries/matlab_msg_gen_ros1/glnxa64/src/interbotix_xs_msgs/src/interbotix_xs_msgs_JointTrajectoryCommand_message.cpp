// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/JointTrajectoryCommand
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
#include "interbotix_xs_msgs/JointTrajectoryCommand.h"
#include "visibility_control.h"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_JointTrajectoryCommand_common : public MATLABROSMsgInterface<interbotix_xs_msgs::JointTrajectoryCommand> {
  public:
    virtual ~interbotix_xs_msgs_msg_JointTrajectoryCommand_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::JointTrajectoryCommand* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::JointTrajectoryCommand* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_JointTrajectoryCommand_common::copy_from_struct(interbotix_xs_msgs::JointTrajectoryCommand* msg, const matlab::data::Struct& arr,
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
        //traj
        const matlab::data::StructArray traj_arr = arr["Traj"];
        auto msgClassPtr_traj = getCommonObject<trajectory_msgs::JointTrajectory>("trajectory_msgs_msg_JointTrajectory_common",loader);
        msgClassPtr_traj->copy_from_struct(&msg->traj,traj_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Traj' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Traj' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_JointTrajectoryCommand_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::JointTrajectoryCommand* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CmdType","Name","Traj"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/JointTrajectoryCommand");
    // cmd_type
    auto currentElement_cmd_type = (msg + ctr)->cmd_type;
    outArray[ctr]["CmdType"] = factory.createCharArray(currentElement_cmd_type);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["Name"] = factory.createCharArray(currentElement_name);
    // traj
    auto currentElement_traj = (msg + ctr)->traj;
    auto msgClassPtr_traj = getCommonObject<trajectory_msgs::JointTrajectory>("trajectory_msgs_msg_JointTrajectory_common",loader);
    outArray[ctr]["Traj"] = msgClassPtr_traj->get_arr(factory, &currentElement_traj, loader);
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_JointTrajectoryCommand_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_JointTrajectoryCommand_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_JointTrajectoryCommand_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::JointTrajectoryCommand,interbotix_xs_msgs_msg_JointTrajectoryCommand_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         interbotix_xs_msgs_JointTrajectoryCommand_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::JointTrajectoryCommand,interbotix_xs_msgs::JointTrajectoryCommand::ConstPtr,interbotix_xs_msgs_msg_JointTrajectoryCommand_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface>
         interbotix_xs_msgs_JointTrajectoryCommand_message::generateRosbagWriterInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::JointTrajectoryCommand,interbotix_xs_msgs_msg_JointTrajectoryCommand_common>>();
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_JointTrajectoryCommand_common, MATLABROSMsgInterface<interbotix_xs_msgs::JointTrajectoryCommand>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_JointTrajectoryCommand_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1