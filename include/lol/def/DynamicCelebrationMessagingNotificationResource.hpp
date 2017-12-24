#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct DynamicCelebrationMessagingNotificationResource { 
    std::string msgId;
    std::string celebrationTitle;
    std::string itemQuantity;
    std::string celebrationMessage;
    int32_t id;
    std::string celebrationType;
    std::string celebrationBody;
    std::string itemId;
    int32_t status;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const DynamicCelebrationMessagingNotificationResource& v) {
    j["msgId"] = v.msgId; 
    j["celebrationTitle"] = v.celebrationTitle; 
    j["itemQuantity"] = v.itemQuantity; 
    j["celebrationMessage"] = v.celebrationMessage; 
    j["id"] = v.id; 
    j["celebrationType"] = v.celebrationType; 
    j["celebrationBody"] = v.celebrationBody; 
    j["itemId"] = v.itemId; 
    j["status"] = v.status; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, DynamicCelebrationMessagingNotificationResource& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>(); 
    v.itemQuantity = j.at("itemQuantity").get<std::string>(); 
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.celebrationBody = j.at("celebrationBody").get<std::string>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}