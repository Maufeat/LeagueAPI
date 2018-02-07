#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameLoginSummonerLevelAndPoints { 
    uint64_t expPoints;
    uint64_t expToNextLevel;
    uint32_t summonerLevel; 
  };
  inline void to_json(json& j, const LolEndOfGameLoginSummonerLevelAndPoints& v) {
    j["expPoints"] = v.expPoints; 
    j["expToNextLevel"] = v.expToNextLevel; 
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, LolEndOfGameLoginSummonerLevelAndPoints& v) {
    v.expPoints = j.at("expPoints").get<uint64_t>(); 
    v.expToNextLevel = j.at("expToNextLevel").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}