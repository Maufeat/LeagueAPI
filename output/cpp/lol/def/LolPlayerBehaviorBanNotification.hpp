#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPlayerBehaviorNotificationSource.hpp>
namespace lol {
  struct LolPlayerBehaviorBanNotification { 
    LolPlayerBehaviorNotificationSource source;
    std::string reason;
    uint64_t id;
    bool isPermaBan;
    bool displayReformCard;
    uint64_t timeUntilBanExpires; 
  };
  void to_json(json& j, const LolPlayerBehaviorBanNotification& v) {
  j["source"] = v.source; 
  j["reason"] = v.reason; 
  j["id"] = v.id; 
  j["isPermaBan"] = v.isPermaBan; 
  j["displayReformCard"] = v.displayReformCard; 
  j["timeUntilBanExpires"] = v.timeUntilBanExpires; 
  }
  void from_json(const json& j, LolPlayerBehaviorBanNotification& v) {
  v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>(); 
  v.reason = j.at("reason").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.isPermaBan = j.at("isPermaBan").get<bool>(); 
  v.displayReformCard = j.at("displayReformCard").get<bool>(); 
  v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>(); 
  }
}