#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLootLoginSummonerLevelAndPoints { /**/ 
    uint32_t summonerLevel;/**/
  };
  static void to_json(json& j, const LolLootLoginSummonerLevelAndPoints& v) { 
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, LolLootLoginSummonerLevelAndPoints& v) { 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
} 