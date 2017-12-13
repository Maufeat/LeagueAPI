#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BannedChampion { 
    int32_t pickTurn;
    int32_t teamId;
    int32_t championId; 
  };
  void to_json(json& j, const BannedChampion& v) {
  j["pickTurn"] = v.pickTurn; 
  j["teamId"] = v.teamId; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, BannedChampion& v) {
  v.pickTurn = j.at("pickTurn").get<int32_t>(); 
  v.teamId = j.at("teamId").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}