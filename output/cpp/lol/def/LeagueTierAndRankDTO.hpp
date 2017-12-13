#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsQueueType.hpp>
#include <lol/def/LeaguesLcdsLeagueRank.hpp>
#include <lol/def/LeaguesLcdsLeagueTier.hpp>
namespace lol {
  struct LeagueTierAndRankDTO { 
    LeaguesLcdsLeagueRank rank;
    LeaguesLcdsQueueType queueType;
    LeaguesLcdsLeagueTier tier;
    std::string playerOrTeamName;
    std::string playerOrTeamId; 
  };
  void to_json(json& j, const LeagueTierAndRankDTO& v) {
    j["rank"] = v.rank; 
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
  }
  void from_json(const json& j, LeagueTierAndRankDTO& v) {
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
  }
}