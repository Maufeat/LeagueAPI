#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BannedChampion { 
    int32_t teamId;
    int32_t pickTurn;
    int32_t championId; 
  };
  inline void to_json(json& j, const BannedChampion& v) {
    j["teamId"] = v.teamId; 
    j["pickTurn"] = v.pickTurn; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, BannedChampion& v) {
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}