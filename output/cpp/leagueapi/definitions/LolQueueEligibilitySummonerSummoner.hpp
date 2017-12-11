#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolQueueEligibilitySummonerSummoner { /**/ 
    uint64_t summonerId;/**/
    uint32_t summonerLevel;/**/
  };
  static void to_json(json& j, const LolQueueEligibilitySummonerSummoner& v) { 
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, LolQueueEligibilitySummonerSummoner& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
} 