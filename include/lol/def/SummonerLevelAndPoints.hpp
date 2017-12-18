#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SummonerLevelAndPoints { 
    uint32_t summonerLevel;
    uint64_t expToNextLevel;
    uint64_t expPoints;
    uint64_t sumId; 
  };
  inline void to_json(json& j, const SummonerLevelAndPoints& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["expToNextLevel"] = v.expToNextLevel; 
    j["expPoints"] = v.expPoints; 
    j["sumId"] = v.sumId; 
  }
  inline void from_json(const json& j, SummonerLevelAndPoints& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.expToNextLevel = j.at("expToNextLevel").get<uint64_t>(); 
    v.expPoints = j.at("expPoints").get<uint64_t>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
}