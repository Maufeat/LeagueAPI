#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootLoginSummonerLevelAndPoints { 
    uint32_t summonerLevel; 
  };
  inline void to_json(json& j, const LolLootLoginSummonerLevelAndPoints& v) {
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, LolLootLoginSummonerLevelAndPoints& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}