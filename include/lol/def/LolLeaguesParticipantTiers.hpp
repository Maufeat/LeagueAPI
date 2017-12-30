#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesAchievedTier.hpp"
namespace lol {
  struct LolLeaguesParticipantTiers { 
    std::vector<LolLeaguesAchievedTier> achievedTiers;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLeaguesParticipantTiers& v) {
    j["achievedTiers"] = v.achievedTiers; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLeaguesParticipantTiers& v) {
    v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}