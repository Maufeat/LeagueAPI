#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameLoginSummonerLevelAndPoints { 
    uint32_t summonerLevel;
    uint64_t expPoints; 
  };
  inline void to_json(json& j, const LolEndOfGameLoginSummonerLevelAndPoints& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["expPoints"] = v.expPoints; 
  }
  inline void from_json(const json& j, LolEndOfGameLoginSummonerLevelAndPoints& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.expPoints = j.at("expPoints").get<uint64_t>(); 
  }
}