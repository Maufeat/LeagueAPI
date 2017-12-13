#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsQueueType.hpp>
#include <lol/def/LeaguesLcdsLeagueRank.hpp>
#include <lol/def/LeaguesLcdsLeagueTier.hpp>
namespace lol {
  struct LeagueTierAndRankDTO { 
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    LeaguesLcdsLeagueTier tier;
    LeaguesLcdsQueueType queueType;
    LeaguesLcdsLeagueRank rank; 
  };
  void to_json(json& j, const LeagueTierAndRankDTO& v) {
  j["playerOrTeamId"] = v.playerOrTeamId; 
  j["playerOrTeamName"] = v.playerOrTeamName; 
  j["tier"] = v.tier; 
  j["queueType"] = v.queueType; 
  j["rank"] = v.rank; 
  }
  void from_json(const json& j, LeagueTierAndRankDTO& v) {
  v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
  v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
  v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
  v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
  v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
  }
}