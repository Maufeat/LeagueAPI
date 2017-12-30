#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
namespace lol {
  struct LeagueTierAndRankDTO { 
    std::string playerOrTeamId;
    LeaguesLcdsQueueType queueType;
    LeaguesLcdsLeagueRank rank;
    std::string playerOrTeamName;
    LeaguesLcdsLeagueTier tier; 
  };
  inline void to_json(json& j, const LeagueTierAndRankDTO& v) {
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["queueType"] = v.queueType; 
    j["rank"] = v.rank; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, LeagueTierAndRankDTO& v) {
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
  }
}