#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesAchievedTier.hpp>
namespace lol {
  struct LolLeaguesParticipantTiers { 
    std::vector<LolLeaguesAchievedTier> achievedTiers;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolLeaguesParticipantTiers& v) {
  j["achievedTiers"] = v.achievedTiers; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolLeaguesParticipantTiers& v) {
  v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier>>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}