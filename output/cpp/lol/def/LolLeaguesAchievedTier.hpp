#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace lol {
  struct LolLeaguesAchievedTier { 
    uint64_t division;
    LolLeaguesLeagueTier tier;
    LolLeaguesLeagueQueueType queueType; 
  };
  inline void to_json(json& j, const LolLeaguesAchievedTier& v) {
    j["division"] = v.division; 
    j["tier"] = v.tier; 
    j["queueType"] = v.queueType; 
  }
  inline void from_json(const json& j, LolLeaguesAchievedTier& v) {
    v.division = j.at("division").get<uint64_t>(); 
    v.tier = j.at("tier").get<LolLeaguesLeagueTier>(); 
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
  }
}