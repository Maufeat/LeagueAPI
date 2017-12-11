#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct FellowPlayerInfo { /**/ 
    uint64_t teamId;/**/
    uint64_t summonerId;/**/
    uint64_t championId;/**/
  };
  static void to_json(json& j, const FellowPlayerInfo& v) { 
    j["teamId"] = v.teamId;
    j["summonerId"] = v.summonerId;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, FellowPlayerInfo& v) { 
    v.teamId = j.at("teamId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<uint64_t>(); 
  }
} 