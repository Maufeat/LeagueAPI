#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerSummonerIcon { /**/ 
    int32_t profileIconId;/**/
  };
  static void to_json(json& j, const LolSummonerSummonerIcon& v) { 
    j["profileIconId"] = v.profileIconId;
  }
  static void from_json(const json& j, LolSummonerSummonerIcon& v) { 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
} 