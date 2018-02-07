#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesAchievedTier.hpp"
namespace lol {
  struct LolLeaguesParticipantTiers { 
    uint64_t summonerId;
    std::vector<LolLeaguesAchievedTier> achievedTiers; 
  };
  inline void to_json(json& j, const LolLeaguesParticipantTiers& v) {
    j["summonerId"] = v.summonerId; 
    j["achievedTiers"] = v.achievedTiers; 
  }
  inline void from_json(const json& j, LolLeaguesParticipantTiers& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier>>(); 
  }
}