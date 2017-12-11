#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLeaguesLeagueTier.hpp>
#include <leagueapi/definitions/LolLeaguesLeagueQueueType.hpp>

namespace leagueapi {
  struct LolLeaguesAchievedTier { /**/ 
    LolLeaguesLeagueTier tier;/**/
    uint64_t division;/**/
    LolLeaguesLeagueQueueType queueType;/**/
  };
  static void to_json(json& j, const LolLeaguesAchievedTier& v) { 
    j["tier"] = v.tier;
    j["division"] = v.division;
    j["queueType"] = v.queueType;
  }
  static void from_json(const json& j, LolLeaguesAchievedTier& v) { 
    v.tier = j.at("tier").get<LolLeaguesLeagueTier>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
  }
} 