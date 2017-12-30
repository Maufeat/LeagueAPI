#pragma once
#include "../base_def.hpp" 
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace lol {
  struct LolPlayerBehaviorRestrictionNotification { 
    int64_t gamesRemaining;
    uint64_t id;
    LolPlayerBehaviorNotificationSource source;
    bool displayReformCard; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorRestrictionNotification& v) {
    j["gamesRemaining"] = v.gamesRemaining; 
    j["id"] = v.id; 
    j["source"] = v.source; 
    j["displayReformCard"] = v.displayReformCard; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorRestrictionNotification& v) {
    v.gamesRemaining = j.at("gamesRemaining").get<int64_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>(); 
    v.displayReformCard = j.at("displayReformCard").get<bool>(); 
  }
}