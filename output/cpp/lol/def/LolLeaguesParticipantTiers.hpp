#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesAchievedTier.hpp>
namespace lol {
  struct LolLeaguesParticipantTiers { 
    uint64_t summonerId;
    std::vector<LolLeaguesAchievedTier> achievedTiers; 
  };
  void to_json(json& j, const LolLeaguesParticipantTiers& v) {
  j["summonerId"] = v.summonerId; 
  j["achievedTiers"] = v.achievedTiers; 
  }
  void from_json(const json& j, LolLeaguesParticipantTiers& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier>>(); 
  }
}