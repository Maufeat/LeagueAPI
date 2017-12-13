#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPlayerBehaviorNotificationSource.hpp>
namespace lol {
  struct LolPlayerBehaviorRestrictionNotification { 
    int64_t gamesRemaining;
    LolPlayerBehaviorNotificationSource source;
    bool displayReformCard;
    uint64_t id; 
  };
  void to_json(json& j, const LolPlayerBehaviorRestrictionNotification& v) {
    j["gamesRemaining"] = v.gamesRemaining; 
    j["source"] = v.source; 
    j["displayReformCard"] = v.displayReformCard; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolPlayerBehaviorRestrictionNotification& v) {
    v.gamesRemaining = j.at("gamesRemaining").get<int64_t>(); 
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>(); 
    v.displayReformCard = j.at("displayReformCard").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}