#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace lol {
  struct LeagueTierAndRankDTO { 
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    LeaguesLcdsQueueType queueType;
    LeaguesLcdsLeagueTier tier;
    LeaguesLcdsLeagueRank rank; 
  };
  inline void to_json(json& j, const LeagueTierAndRankDTO& v) {
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["rank"] = v.rank; 
  }
  inline void from_json(const json& j, LeagueTierAndRankDTO& v) {
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
  }
}