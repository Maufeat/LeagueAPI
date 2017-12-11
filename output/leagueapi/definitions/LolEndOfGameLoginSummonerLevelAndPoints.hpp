#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameLoginSummonerLevelAndPoints { /**/ 
    uint64_t expPoints;/**/
    uint32_t summonerLevel;/**/
  };
  static void to_json(json& j, const LolEndOfGameLoginSummonerLevelAndPoints& v) { 
    j["expPoints"] = v.expPoints;
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, LolEndOfGameLoginSummonerLevelAndPoints& v) { 
    v.expPoints = j.at("expPoints").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
} 