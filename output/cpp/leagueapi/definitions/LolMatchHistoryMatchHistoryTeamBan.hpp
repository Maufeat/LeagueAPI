#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeamBan { /**/ 
    uint16_t pickTurn;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryTeamBan& v) { 
    j["pickTurn"] = v.pickTurn;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryTeamBan& v) { 
    v.pickTurn = j.at("pickTurn").get<uint16_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 