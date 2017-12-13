#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameChampionMasteryMini { 
    uint64_t playerId;
    int64_t championLevel;
    int32_t championId; 
  };
  void to_json(json& j, const LolEndOfGameChampionMasteryMini& v) {
  j["playerId"] = v.playerId; 
  j["championLevel"] = v.championLevel; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolEndOfGameChampionMasteryMini& v) {
  v.playerId = j.at("playerId").get<uint64_t>(); 
  v.championLevel = j.at("championLevel").get<int64_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}