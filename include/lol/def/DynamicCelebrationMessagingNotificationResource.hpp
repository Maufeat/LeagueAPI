#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct DynamicCelebrationMessagingNotificationResource { 
    int32_t id;
    std::string msgId;
    std::string celebrationTitle;
    std::string celebrationBody;
    std::string celebrationMessage;
    std::string inventoryType;
    std::string itemId;
    std::string itemQuantity;
    std::string celebrationType;
    int32_t status; 
  };
  inline void to_json(json& j, const DynamicCelebrationMessagingNotificationResource& v) {
    j["id"] = v.id; 
    j["msgId"] = v.msgId; 
    j["celebrationTitle"] = v.celebrationTitle; 
    j["celebrationBody"] = v.celebrationBody; 
    j["celebrationMessage"] = v.celebrationMessage; 
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
    j["itemQuantity"] = v.itemQuantity; 
    j["celebrationType"] = v.celebrationType; 
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, DynamicCelebrationMessagingNotificationResource& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>(); 
    v.celebrationBody = j.at("celebrationBody").get<std::string>(); 
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
    v.itemQuantity = j.at("itemQuantity").get<std::string>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
  }
}