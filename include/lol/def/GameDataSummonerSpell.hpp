#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameDataSummonerSpell { 
    uint64_t id;
    uint32_t summonerLevel; 
  };
  inline void to_json(json& j, const GameDataSummonerSpell& v) {
    j["id"] = v.id; 
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, GameDataSummonerSpell& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}