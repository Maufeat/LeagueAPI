#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct DynamicCelebrationMessagingNotificationResource { 
    std::string msgId;
    int32_t status;
    std::string celebrationBody;
    std::string itemId;
    std::string celebrationTitle;
    std::string celebrationMessage;
    std::string celebrationType;
    std::string itemQuantity;
    std::string inventoryType;
    int32_t id; 
  };
  void to_json(json& j, const DynamicCelebrationMessagingNotificationResource& v) {
    j["msgId"] = v.msgId; 
    j["status"] = v.status; 
    j["celebrationBody"] = v.celebrationBody; 
    j["itemId"] = v.itemId; 
    j["celebrationTitle"] = v.celebrationTitle; 
    j["celebrationMessage"] = v.celebrationMessage; 
    j["celebrationType"] = v.celebrationType; 
    j["itemQuantity"] = v.itemQuantity; 
    j["inventoryType"] = v.inventoryType; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, DynamicCelebrationMessagingNotificationResource& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.celebrationBody = j.at("celebrationBody").get<std::string>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>(); 
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.itemQuantity = j.at("itemQuantity").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}