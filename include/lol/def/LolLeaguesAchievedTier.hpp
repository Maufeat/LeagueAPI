#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
namespace lol {
  struct LolLeaguesAchievedTier { 
    LolLeaguesLeagueQueueType queueType;
    uint64_t division;
    LolLeaguesLeagueTier tier; 
  };
  inline void to_json(json& j, const LolLeaguesAchievedTier& v) {
    j["queueType"] = v.queueType; 
    j["division"] = v.division; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, LolLeaguesAchievedTier& v) {
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.tier = j.at("tier").get<LolLeaguesLeagueTier>(); 
  }
}