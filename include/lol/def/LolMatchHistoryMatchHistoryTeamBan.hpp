#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryTeamBan { 
    int32_t championId;
    uint16_t pickTurn; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTeamBan& v) {
    j["championId"] = v.championId; 
    j["pickTurn"] = v.pickTurn; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTeamBan& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.pickTurn = j.at("pickTurn").get<uint16_t>(); 
  }
}