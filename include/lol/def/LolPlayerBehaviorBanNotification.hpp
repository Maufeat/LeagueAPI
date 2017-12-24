#pragma once
#include "../base_def.hpp" 
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace lol {
  struct LolPlayerBehaviorBanNotification { 
    uint64_t timeUntilBanExpires;
    std::string reason;
    bool isPermaBan;
    uint64_t id;
    LolPlayerBehaviorNotificationSource source;
    bool displayReformCard; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorBanNotification& v) {
    j["timeUntilBanExpires"] = v.timeUntilBanExpires; 
    j["reason"] = v.reason; 
    j["isPermaBan"] = v.isPermaBan; 
    j["id"] = v.id; 
    j["source"] = v.source; 
    j["displayReformCard"] = v.displayReformCard; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorBanNotification& v) {
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.isPermaBan = j.at("isPermaBan").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>(); 
    v.displayReformCard = j.at("displayReformCard").get<bool>(); 
  }
}