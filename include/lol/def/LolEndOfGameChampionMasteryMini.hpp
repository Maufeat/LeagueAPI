#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameChampionMasteryMini { 
    uint64_t playerId;
    int32_t championId;
    int64_t championLevel; 
  };
  inline void to_json(json& j, const LolEndOfGameChampionMasteryMini& v) {
    j["playerId"] = v.playerId; 
    j["championId"] = v.championId; 
    j["championLevel"] = v.championLevel; 
  }
  inline void from_json(const json& j, LolEndOfGameChampionMasteryMini& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.championLevel = j.at("championLevel").get<int64_t>(); 
  }
}