#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMissionsCollectionsSummoner { /**/ 
    int32_t summonerLevel;/**/
  };
  static void to_json(json& j, const LolMissionsCollectionsSummoner& v) { 
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, LolMissionsCollectionsSummoner& v) { 
    v.summonerLevel = j.at("summonerLevel").get<int32_t>(); 
  }
} 