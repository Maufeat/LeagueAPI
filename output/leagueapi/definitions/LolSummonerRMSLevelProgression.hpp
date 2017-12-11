#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerRMSLevelProgression { /**/ 
    uint64_t finalXp;/**/
    uint64_t finalLevelBoundary;/**/
    uint64_t initialXp;/**/
    uint64_t initialLevelBoundary;/**/
  };
  static void to_json(json& j, const LolSummonerRMSLevelProgression& v) { 
    j["finalXp"] = v.finalXp;
    j["finalLevelBoundary"] = v.finalLevelBoundary;
    j["initialXp"] = v.initialXp;
    j["initialLevelBoundary"] = v.initialLevelBoundary;
  }
  static void from_json(const json& j, LolSummonerRMSLevelProgression& v) { 
    v.finalXp = j.at("finalXp").get<uint64_t>(); 
    v.finalLevelBoundary = j.at("finalLevelBoundary").get<uint64_t>(); 
    v.initialXp = j.at("initialXp").get<uint64_t>(); 
    v.initialLevelBoundary = j.at("initialLevelBoundary").get<uint64_t>(); 
  }
} 