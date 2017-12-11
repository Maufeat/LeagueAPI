#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreSummonerLevelAndPoints { /**/ 
    uint32_t summonerLevel;/**/
  };
  static void to_json(json& j, const LolStoreSummonerLevelAndPoints& v) { 
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, LolStoreSummonerLevelAndPoints& v) { 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
} 