#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampionsSummoner { /**/ 
    uint32_t summonerLevel;/**/
  };
  static void to_json(json& j, const LolChampionsSummoner& v) { 
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, LolChampionsSummoner& v) { 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
} 