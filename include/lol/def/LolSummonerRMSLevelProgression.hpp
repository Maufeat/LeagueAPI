#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerRMSLevelProgression { 
    uint64_t finalXp;
    uint64_t initialLevelBoundary;
    uint64_t finalLevelBoundary;
    uint64_t initialXp; 
  };
  inline void to_json(json& j, const LolSummonerRMSLevelProgression& v) {
    j["finalXp"] = v.finalXp; 
    j["initialLevelBoundary"] = v.initialLevelBoundary; 
    j["finalLevelBoundary"] = v.finalLevelBoundary; 
    j["initialXp"] = v.initialXp; 
  }
  inline void from_json(const json& j, LolSummonerRMSLevelProgression& v) {
    v.finalXp = j.at("finalXp").get<uint64_t>(); 
    v.initialLevelBoundary = j.at("initialLevelBoundary").get<uint64_t>(); 
    v.finalLevelBoundary = j.at("finalLevelBoundary").get<uint64_t>(); 
    v.initialXp = j.at("initialXp").get<uint64_t>(); 
  }
}