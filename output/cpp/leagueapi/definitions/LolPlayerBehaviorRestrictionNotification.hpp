#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPlayerBehaviorNotificationSource.hpp>

namespace leagueapi {
  struct LolPlayerBehaviorRestrictionNotification { /**/ 
    LolPlayerBehaviorNotificationSource source;/**/
    int64_t gamesRemaining;/**/
    bool displayReformCard;/**/
    uint64_t id;/**/
  };
  static void to_json(json& j, const LolPlayerBehaviorRestrictionNotification& v) { 
    j["source"] = v.source;
    j["gamesRemaining"] = v.gamesRemaining;
    j["displayReformCard"] = v.displayReformCard;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolPlayerBehaviorRestrictionNotification& v) { 
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>(); 
    v.gamesRemaining = j.at("gamesRemaining").get<int64_t>(); 
    v.displayReformCard = j.at("displayReformCard").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
} 