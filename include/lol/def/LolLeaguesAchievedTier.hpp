#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace lol {
  struct LolLeaguesAchievedTier { 
    LolLeaguesLeagueQueueType queueType;
    LolLeaguesLeagueTier tier;
    uint64_t division; 
  };
  inline void to_json(json& j, const LolLeaguesAchievedTier& v) {
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["division"] = v.division; 
  }
  inline void from_json(const json& j, LolLeaguesAchievedTier& v) {
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
    v.tier = j.at("tier").get<LolLeaguesLeagueTier>(); 
    v.division = j.at("division").get<uint64_t>(); 
  }
}