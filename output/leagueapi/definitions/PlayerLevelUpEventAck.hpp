#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerLevelUpEventAck { /**/ 
    bool seenThisEvent;/**/
    uint32_t newSummonerLevel;/**/
  };
  static void to_json(json& j, const PlayerLevelUpEventAck& v) { 
    j["seenThisEvent"] = v.seenThisEvent;
    j["newSummonerLevel"] = v.newSummonerLevel;
  }
  static void from_json(const json& j, PlayerLevelUpEventAck& v) { 
    v.seenThisEvent = j.at("seenThisEvent").get<bool>(); 
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
  }
} 