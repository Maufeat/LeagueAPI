#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoginSummonerCreatedResource { /**/ 
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const LolLoginSummonerCreatedResource& v) { 
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, LolLoginSummonerCreatedResource& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 