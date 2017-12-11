#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerSummonerCreatedId { /**/ 
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const LolSummonerSummonerCreatedId& v) { 
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, LolSummonerSummonerCreatedId& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 