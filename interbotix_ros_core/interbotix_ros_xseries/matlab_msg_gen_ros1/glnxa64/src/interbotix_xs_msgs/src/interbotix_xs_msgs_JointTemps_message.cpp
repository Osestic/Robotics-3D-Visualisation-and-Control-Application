// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for interbotix_xs_msgs/JointTemps
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
#include "interbotix_xs_msgs/JointTemps.h"
#include "visibility_control.h"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_msg_JointTemps_common : public MATLABROSMsgInterface<interbotix_xs_msgs::JointTemps> {
  public:
    virtual ~interbotix_xs_msgs_msg_JointTemps_common(){}
    virtual void copy_from_struct(interbotix_xs_msgs::JointTemps* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const interbotix_xs_msgs::JointTemps* msg, MultiLibLoader loader, size_t size = 1);
};
  void interbotix_xs_msgs_msg_JointTemps_common::copy_from_struct(interbotix_xs_msgs::JointTemps* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //names
        const matlab::data::CellArray names_cellarr = arr["Names"];
        size_t nelem = names_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray names_arr = names_cellarr[idx];
        	msg->names.push_back(names_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Names' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Names' is wrong type; expected a string.");
    }
    try {
        //temps
        const matlab::data::TypedArray<int32_t> temps_arr = arr["Temps"];
        size_t nelem = temps_arr.getNumberOfElements();
        	msg->temps.resize(nelem);
        	std::copy(temps_arr.begin(), temps_arr.begin()+nelem, msg->temps.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Temps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Temps' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T interbotix_xs_msgs_msg_JointTemps_common::get_arr(MDFactory_T& factory, const interbotix_xs_msgs::JointTemps* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Names","Temps"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("interbotix_xs_msgs/JointTemps");
    // names
    auto currentElement_names = (msg + ctr)->names;
    auto namesoutCell = factory.createCellArray({currentElement_names.size(),1});
    for(size_t idxin = 0; idxin < currentElement_names.size(); ++ idxin){
    	namesoutCell[idxin] = factory.createCharArray(currentElement_names[idxin]);
    }
    outArray[ctr]["Names"] = namesoutCell;
    // temps
    auto currentElement_temps = (msg + ctr)->temps;
    outArray[ctr]["Temps"] = factory.createArray<interbotix_xs_msgs::JointTemps::_temps_type::const_iterator, int32_t>({currentElement_temps.size(),1}, currentElement_temps.begin(), currentElement_temps.end());
    }
    return std::move(outArray);
  } 
class INTERBOTIX_XS_MSGS_EXPORT interbotix_xs_msgs_JointTemps_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~interbotix_xs_msgs_JointTemps_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          interbotix_xs_msgs_JointTemps_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<interbotix_xs_msgs::JointTemps,interbotix_xs_msgs_msg_JointTemps_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         interbotix_xs_msgs_JointTemps_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<interbotix_xs_msgs::JointTemps,interbotix_xs_msgs::JointTemps::ConstPtr,interbotix_xs_msgs_msg_JointTemps_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface>
         interbotix_xs_msgs_JointTemps_message::generateRosbagWriterInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSBagWriterImpl<interbotix_xs_msgs::JointTemps,interbotix_xs_msgs_msg_JointTemps_common>>();
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_msg_JointTemps_common, MATLABROSMsgInterface<interbotix_xs_msgs::JointTemps>)
CLASS_LOADER_REGISTER_CLASS(interbotix_xs_msgs_JointTemps_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1