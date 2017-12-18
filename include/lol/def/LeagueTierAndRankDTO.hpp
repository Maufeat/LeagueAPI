#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace lol {
  struct LeagueTierAndRankDTO { 
    LeaguesLcdsLeagueRank rank;
    LeaguesLcdsQueueType queueType;
    LeaguesLcdsLeagueTier tier;
    std::string playerOrTeamName;
    std::string playerOrTeamId; 
  };
  inline void to_json(json& j, const LeagueTierAndRankDTO& v) {
    j["rank"] = v.rank; 
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
  }
  inline void from_json(const json& j, LeagueTierAndRankDTO& v) {
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
  }
}