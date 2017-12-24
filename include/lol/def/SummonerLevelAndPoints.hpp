#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SummonerLevelAndPoints { 
    uint64_t sumId;
    uint32_t summonerLevel;
    uint64_t expToNextLevel;
    uint64_t expPoints; 
  };
  inline void to_json(json& j, const SummonerLevelAndPoints& v) {
    j["sumId"] = v.sumId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["expToNextLevel"] = v.expToNextLevel; 
    j["expPoints"] = v.expPoints; 
  }
  inline void from_json(const json& j, SummonerLevelAndPoints& v) {
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.expToNextLevel = j.at("expToNextLevel").get<uint64_t>(); 
    v.expPoints = j.at("expPoints").get<uint64_t>(); 
  }
}