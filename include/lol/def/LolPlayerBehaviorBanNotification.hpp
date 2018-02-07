#pragma once
#include "../base_def.hpp" 
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace lol {
  struct LolPlayerBehaviorBanNotification { 
    uint64_t id;
    LolPlayerBehaviorNotificationSource source;
    std::string reason;
    uint64_t timeUntilBanExpires;
    bool isPermaBan;
    bool displayReformCard; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorBanNotification& v) {
    j["id"] = v.id; 
    j["source"] = v.source; 
    j["reason"] = v.reason; 
    j["timeUntilBanExpires"] = v.timeUntilBanExpires; 
    j["isPermaBan"] = v.isPermaBan; 
    j["displayReformCard"] = v.displayReformCard; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorBanNotification& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>(); 
    v.isPermaBan = j.at("isPermaBan").get<bool>(); 
    v.displayReformCard = j.at("displayReformCard").get<bool>(); 
  }
}