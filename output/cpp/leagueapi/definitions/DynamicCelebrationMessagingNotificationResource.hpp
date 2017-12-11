#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct DynamicCelebrationMessagingNotificationResource { /**/ 
    int32_t status;/**/
    std::string itemId;/**/
    std::string celebrationType;/**/
    int32_t id;/**/
    std::string celebrationMessage;/**/
    std::string celebrationTitle;/**/
    std::string msgId;/**/
    std::string celebrationBody;/**/
    std::string itemQuantity;/**/
    std::string inventoryType;/**/
  };
  static void to_json(json& j, const DynamicCelebrationMessagingNotificationResource& v) { 
    j["status"] = v.status;
    j["itemId"] = v.itemId;
    j["celebrationType"] = v.celebrationType;
    j["id"] = v.id;
    j["celebrationMessage"] = v.celebrationMessage;
    j["celebrationTitle"] = v.celebrationTitle;
    j["msgId"] = v.msgId;
    j["celebrationBody"] = v.celebrationBody;
    j["itemQuantity"] = v.itemQuantity;
    j["inventoryType"] = v.inventoryType;
  }
  static void from_json(const json& j, DynamicCelebrationMessagingNotificationResource& v) { 
    v.status = j.at("status").get<int32_t>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>(); 
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.celebrationBody = j.at("celebrationBody").get<std::string>(); 
    v.itemQuantity = j.at("itemQuantity").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
} 