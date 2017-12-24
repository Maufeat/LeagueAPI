#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace lol {
  struct LeagueTierAndRankDTO { 
    LeaguesLcdsQueueType queueType;
    std::string playerOrTeamName;
    std::string playerOrTeamId;
    LeaguesLcdsLeagueRank rank;
    LeaguesLcdsLeagueTier tier; 
  };
  inline void to_json(json& j, const LeagueTierAndRankDTO& v) {
    j["queueType"] = v.queueType; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["rank"] = v.rank; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, LeagueTierAndRankDTO& v) {
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
  }
}