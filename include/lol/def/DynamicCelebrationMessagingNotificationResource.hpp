#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct DynamicCelebrationMessagingNotificationResource { 
    std::string celebrationMessage;
    int32_t id;
    std::string celebrationTitle;
    std::string celebrationType;
    std::string inventoryType;
    std::string itemQuantity;
    int32_t status;
    std::string celebrationBody;
    std::string msgId;
    std::string itemId; 
  };
  inline void to_json(json& j, const DynamicCelebrationMessagingNotificationResource& v) {
    j["celebrationMessage"] = v.celebrationMessage; 
    j["id"] = v.id; 
    j["celebrationTitle"] = v.celebrationTitle; 
    j["celebrationType"] = v.celebrationType; 
    j["inventoryType"] = v.inventoryType; 
    j["itemQuantity"] = v.itemQuantity; 
    j["status"] = v.status; 
    j["celebrationBody"] = v.celebrationBody; 
    j["msgId"] = v.msgId; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, DynamicCelebrationMessagingNotificationResource& v) {
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemQuantity = j.at("itemQuantity").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.celebrationBody = j.at("celebrationBody").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
  }
}