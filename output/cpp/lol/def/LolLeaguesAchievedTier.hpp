#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeagueQueueType.hpp>
#include <lol/def/LolLeaguesLeagueTier.hpp>
namespace lol {
  struct LolLeaguesAchievedTier { 
    LolLeaguesLeagueTier tier;
    uint64_t division;
    LolLeaguesLeagueQueueType queueType; 
  };
  void to_json(json& j, const LolLeaguesAchievedTier& v) {
  j["tier"] = v.tier; 
  j["division"] = v.division; 
  j["queueType"] = v.queueType; 
  }
  void from_json(const json& j, LolLeaguesAchievedTier& v) {
  v.tier = j.at("tier").get<LolLeaguesLeagueTier>(); 
  v.division = j.at("division").get<uint64_t>(); 
  v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
  }
}