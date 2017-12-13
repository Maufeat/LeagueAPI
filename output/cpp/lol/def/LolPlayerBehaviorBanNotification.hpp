#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPlayerBehaviorNotificationSource.hpp>
namespace lol {
  struct LolPlayerBehaviorBanNotification { 
    uint64_t timeUntilBanExpires;
    bool isPermaBan;
    LolPlayerBehaviorNotificationSource source;
    bool displayReformCard;
    uint64_t id;
    std::string reason; 
  };
  void to_json(json& j, const LolPlayerBehaviorBanNotification& v) {
    j["timeUntilBanExpires"] = v.timeUntilBanExpires; 
    j["isPermaBan"] = v.isPermaBan; 
    j["source"] = v.source; 
    j["displayReformCard"] = v.displayReformCard; 
    j["id"] = v.id; 
    j["reason"] = v.reason; 
  }
  void from_json(const json& j, LolPlayerBehaviorBanNotification& v) {
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>(); 
    v.isPermaBan = j.at("isPermaBan").get<bool>(); 
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>(); 
    v.displayReformCard = j.at("displayReformCard").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}