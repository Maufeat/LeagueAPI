#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BannedChampion { /**/ 
    int32_t teamId;/**/
    int32_t pickTurn;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const BannedChampion& v) { 
    j["teamId"] = v.teamId;
    j["pickTurn"] = v.pickTurn;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, BannedChampion& v) { 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 