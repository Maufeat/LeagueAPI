#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameChampionMasteryMini { 
    int64_t championLevel;
    int32_t championId;
    uint64_t playerId; 
  };
  void to_json(json& j, const LolEndOfGameChampionMasteryMini& v) {
    j["championLevel"] = v.championLevel; 
    j["championId"] = v.championId; 
    j["playerId"] = v.playerId; 
  }
  void from_json(const json& j, LolEndOfGameChampionMasteryMini& v) {
    v.championLevel = j.at("championLevel").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}