#pragma once
#include "../base_def.hpp" 
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace lol {
  struct LolPlayerBehaviorBanNotification { 
    bool isPermaBan;
    uint64_t id;
    uint64_t timeUntilBanExpires;
    bool displayReformCard;
    std::string reason;
    LolPlayerBehaviorNotificationSource source; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorBanNotification& v) {
    j["isPermaBan"] = v.isPermaBan; 
    j["id"] = v.id; 
    j["timeUntilBanExpires"] = v.timeUntilBanExpires; 
    j["displayReformCard"] = v.displayReformCard; 
    j["reason"] = v.reason; 
    j["source"] = v.source; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorBanNotification& v) {
    v.isPermaBan = j.at("isPermaBan").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>(); 
    v.displayReformCard = j.at("displayReformCard").get<bool>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>(); 
  }
}