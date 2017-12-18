#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryTeamBan { 
    uint16_t pickTurn;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTeamBan& v) {
    j["pickTurn"] = v.pickTurn; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTeamBan& v) {
    v.pickTurn = j.at("pickTurn").get<uint16_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}