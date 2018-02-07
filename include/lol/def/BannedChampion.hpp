#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BannedChampion { 
    int32_t championId;
    int32_t teamId;
    int32_t pickTurn; 
  };
  inline void to_json(json& j, const BannedChampion& v) {
    j["championId"] = v.championId; 
    j["teamId"] = v.teamId; 
    j["pickTurn"] = v.pickTurn; 
  }
  inline void from_json(const json& j, BannedChampion& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
  }
}