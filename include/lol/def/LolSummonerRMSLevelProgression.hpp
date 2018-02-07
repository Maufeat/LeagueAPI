#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerRMSLevelProgression { 
    uint64_t initialXp;
    uint64_t finalXp;
    uint64_t initialLevelBoundary;
    uint64_t finalLevelBoundary; 
  };
  inline void to_json(json& j, const LolSummonerRMSLevelProgression& v) {
    j["initialXp"] = v.initialXp; 
    j["finalXp"] = v.finalXp; 
    j["initialLevelBoundary"] = v.initialLevelBoundary; 
    j["finalLevelBoundary"] = v.finalLevelBoundary; 
  }
  inline void from_json(const json& j, LolSummonerRMSLevelProgression& v) {
    v.initialXp = j.at("initialXp").get<uint64_t>(); 
    v.finalXp = j.at("finalXp").get<uint64_t>(); 
    v.initialLevelBoundary = j.at("initialLevelBoundary").get<uint64_t>(); 
    v.finalLevelBoundary = j.at("finalLevelBoundary").get<uint64_t>(); 
  }
}