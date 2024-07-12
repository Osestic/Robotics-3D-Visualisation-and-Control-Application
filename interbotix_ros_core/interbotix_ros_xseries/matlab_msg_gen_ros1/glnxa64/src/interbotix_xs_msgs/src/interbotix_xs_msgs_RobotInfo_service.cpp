// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/RobotInfoRequest
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
#include "interbotix_xs_msgs/RobotInfo.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_RobotInfoRequest_common : public MATLABROSMsgInterface<interbotix_xs_msgs::RobotInfo::Request> {
  public:
    virtual ~interbotix_xs_msgs_msg_RobotInfoRequest_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::RobotInfo::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::RobotInfo::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_RobotInfoRequest_common::copy_from_struct(interbotix_xs_msgs::RobotInfo::Request* msg, const matlab::data::Struct& arr,
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
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_RobotInfoRequest_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::RobotInfo::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CmdType","Name"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/RobotInfoRequest");
    // cmd_type
    auto currentElement_cmd_type = (msg + ctr)->cmd_type;
    outArray[ctr]["CmdType"] = factory.createCharArray(currentElement_cmd_type);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["Name"] = factory.createCharArray(currentElement_name);
    }
    return std::move(outArray);
  }
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_RobotInfoResponse_common : public MATLABROSMsgInterface<interbotix_xs_msgs::RobotInfo::Response> {
  public:
    virtual ~interbotix_xs_msgs_msg_RobotInfoResponse_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::RobotInfo::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::RobotInfo::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_RobotInfoResponse_common::copy_from_struct(interbotix_xs_msgs::RobotInfo::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
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
        //joint_names
        const matlab::data::CellArray joint_names_cellarr = arr["JointNames"];
        size_t nelem = joint_names_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray joint_names_arr = joint_names_cellarr[idx];
        	msg->joint_names.push_back(joint_names_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointNames' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointNames' is wrong type; expected a string.");
    }
    try {
        //joint_ids
        const matlab::data::TypedArray<int16_t> joint_ids_arr = arr["JointIds"];
        size_t nelem = joint_ids_arr.getNumberOfElements();
        	msg->joint_ids.resize(nelem);
        	std::copy(joint_ids_arr.begin(), joint_ids_arr.begin()+nelem, msg->joint_ids.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointIds' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointIds' is wrong type; expected a int16.");
    }
    try {
        //joint_lower_limits
        const matlab::data::TypedArray<float> joint_lower_limits_arr = arr["JointLowerLimits"];
        size_t nelem = joint_lower_limits_arr.getNumberOfElements();
        	msg->joint_lower_limits.resize(nelem);
        	std::copy(joint_lower_limits_arr.begin(), joint_lower_limits_arr.begin()+nelem, msg->joint_lower_limits.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointLowerLimits' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointLowerLimits' is wrong type; expected a single.");
    }
    try {
        //joint_upper_limits
        const matlab::data::TypedArray<float> joint_upper_limits_arr = arr["JointUpperLimits"];
        size_t nelem = joint_upper_limits_arr.getNumberOfElements();
        	msg->joint_upper_limits.resize(nelem);
        	std::copy(joint_upper_limits_arr.begin(), joint_upper_limits_arr.begin()+nelem, msg->joint_upper_limits.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointUpperLimits' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointUpperLimits' is wrong type; expected a single.");
    }
    try {
        //joint_velocity_limits
        const matlab::data::TypedArray<float> joint_velocity_limits_arr = arr["JointVelocityLimits"];
        size_t nelem = joint_velocity_limits_arr.getNumberOfElements();
        	msg->joint_velocity_limits.resize(nelem);
        	std::copy(joint_velocity_limits_arr.begin(), joint_velocity_limits_arr.begin()+nelem, msg->joint_velocity_limits.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointVelocityLimits' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointVelocityLimits' is wrong type; expected a single.");
    }
    try {
        //joint_sleep_positions
        const matlab::data::TypedArray<float> joint_sleep_positions_arr = arr["JointSleepPositions"];
        size_t nelem = joint_sleep_positions_arr.getNumberOfElements();
        	msg->joint_sleep_positions.resize(nelem);
        	std::copy(joint_sleep_positions_arr.begin(), joint_sleep_positions_arr.begin()+nelem, msg->joint_sleep_positions.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointSleepPositions' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointSleepPositions' is wrong type; expected a single.");
    }
    try {
        //joint_state_indices
        const matlab::data::TypedArray<int16_t> joint_state_indices_arr = arr["JointStateIndices"];
        size_t nelem = joint_state_indices_arr.getNumberOfElements();
        	msg->joint_state_indices.resize(nelem);
        	std::copy(joint_state_indices_arr.begin(), joint_state_indices_arr.begin()+nelem, msg->joint_state_indices.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointStateIndices' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointStateIndices' is wrong type; expected a int16.");
    }
    try {
        //num_joints
        const matlab::data::TypedArray<int16_t> num_joints_arr = arr["NumJoints"];
        msg->num_joints = num_joints_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'NumJoints' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'NumJoints' is wrong type; expected a int16.");
    }
    try {
        //name
        const matlab::data::CellArray name_cellarr = arr["Name"];
        size_t nelem = name_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray name_arr = name_cellarr[idx];
        	msg->name.push_back(name_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Name' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_RobotInfoResponse_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::RobotInfo::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Mode","ProfileType","JointNames","JointIds","JointLowerLimits","JointUpperLimits","JointVelocityLimits","JointSleepPositions","JointStateIndices","NumJoints","Name"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/RobotInfoResponse");
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["Mode"] = factory.createCharArray(currentElement_mode);
    // profile_type
    auto currentElement_profile_type = (msg + ctr)->profile_type;
    outArray[ctr]["ProfileType"] = factory.createCharArray(currentElement_profile_type);
    // joint_names
    auto currentElement_joint_names = (msg + ctr)->joint_names;
    auto joint_namesoutCell = factory.createCellArray({currentElement_joint_names.size(),1});
    for(size_t idxin = 0; idxin < currentElement_joint_names.size(); ++ idxin){
    	joint_namesoutCell[idxin] = factory.createCharArray(currentElement_joint_names[idxin]);
    }
    outArray[ctr]["JointNames"] = joint_namesoutCell;
    // joint_ids
    auto currentElement_joint_ids = (msg + ctr)->joint_ids;
    outArray[ctr]["JointIds"] = factory.createArray<interbotix_xs_msgs::RobotInfo::Response::_joint_ids_type::const_iterator, int16_t>({currentElement_joint_ids.size(),1}, currentElement_joint_ids.begin(), currentElement_joint_ids.end());
    // joint_lower_limits
    auto currentElement_joint_lower_limits = (msg + ctr)->joint_lower_limits;
    outArray[ctr]["JointLowerLimits"] = factory.createArray<interbotix_xs_msgs::RobotInfo::Response::_joint_lower_limits_type::const_iterator, float>({currentElement_joint_lower_limits.size(),1}, currentElement_joint_lower_limits.begin(), currentElement_joint_lower_limits.end());
    // joint_upper_limits
    auto currentElement_joint_upper_limits = (msg + ctr)->joint_upper_limits;
    outArray[ctr]["JointUpperLimits"] = factory.createArray<interbotix_xs_msgs::RobotInfo::Response::_joint_upper_limits_type::const_iterator, float>({currentElement_joint_upper_limits.size(),1}, currentElement_joint_upper_limits.begin(), currentElement_joint_upper_limits.end());
    // joint_velocity_limits
    auto currentElement_joint_velocity_limits = (msg + ctr)->joint_velocity_limits;
    outArray[ctr]["JointVelocityLimits"] = factory.createArray<interbotix_xs_msgs::RobotInfo::Response::_joint_velocity_limits_type::const_iterator, float>({currentElement_joint_velocity_limits.size(),1}, currentElement_joint_velocity_limits.begin(), currentElement_joint_velocity_limits.end());
    // joint_sleep_positions
    auto currentElement_joint_sleep_positions = (msg + ctr)->joint_sleep_positions;
    outArray[ctr]["JointSleepPositions"] = factory.createArray<interbotix_xs_msgs::RobotInfo::Response::_joint_sleep_positions_type::const_iterator, float>({currentElement_joint_sleep_positions.size(),1}, currentElement_joint_sleep_positions.begin(), currentElement_joint_sleep_positions.end());
    // joint_state_indices
    auto currentElement_joint_state_indices = (msg + ctr)->joint_state_indices;
    outArray[ctr]["JointStateIndices"] = factory.createArray<interbotix_xs_msgs::RobotInfo::Response::_joint_state_indices_type::const_iterator, int16_t>({currentElement_joint_state_indices.size(),1}, currentElement_joint_state_indices.begin(), currentElement_joint_state_indices.end());
    // num_joints
    auto currentElement_num_joints = (msg + ctr)->num_joints;
    outArray[ctr]["NumJoints"] = factory.createScalar(currentElement_num_joints);
    // name
    auto currentElement_name = (msg + ctr)->name;
    auto nameoutCell = factory.createCellArray({currentElement_name.size(),1});
    for(size_t idxin = 0; idxin < currentElement_name.size(); ++ idxin){
    	nameoutCell[idxin] = factory.createCharArray(currentElement_name[idxin]);
    }
    outArray[ctr]["Name"] = nameoutCell;
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_RobotInfo_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_RobotInfo_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_RobotInfo_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::RobotInfo::Request,interbotix_xs_msgs_msg_RobotInfoRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::RobotInfo::Response,interbotix_xs_msgs_msg_RobotInfoResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          interbotix_xs_msgs_RobotInfo_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::RobotInfo::Request,interbotix_xs_msgs::RobotInfo::Request::ConstPtr,interbotix_xs_msgs_msg_RobotInfoRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::RobotInfo::Response,interbotix_xs_msgs::RobotInfo::Response::ConstPtr,interbotix_xs_msgs_msg_RobotInfoResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          interbotix_xs_msgs_RobotInfo_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<interbotix_xs_msgs::RobotInfo::Request,interbotix_xs_msgs::RobotInfo::Response,interbotix_xs_msgs_msg_RobotInfoRequest_common,interbotix_xs_msgs_msg_RobotInfoResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          interbotix_xs_msgs_RobotInfo_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<interbotix_xs_msgs::RobotInfo,interbotix_xs_msgs::RobotInfo::Request,interbotix_xs_msgs::RobotInfo::Response,interbotix_xs_msgs_msg_RobotInfoRequest_common,interbotix_xs_msgs_msg_RobotInfoResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          interbotix_xs_msgs_RobotInfo_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::RobotInfoRequest,interbotix_xs_msgs_msg_RobotInfoRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::RobotInfoResponse,interbotix_xs_msgs_msg_RobotInfoResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_RobotInfoRequest_common, MATLABROSMsgInterface<interbotix_xs_msgs::RobotInfoRequest>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_RobotInfoResponse_common, MATLABROSMsgInterface<interbotix_xs_msgs::RobotInfoResponse>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_RobotInfo_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
