#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsPlayerAggregatedStats.hpp>
#include <lol/def/LeaguesLcdsTeamIdDTO.hpp>
namespace lol {
  struct LeaguesLcdsTeamAggregatedStats { 
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList;
    std::string queueType;
    LeaguesLcdsTeamIdDTO id; 
  };
  void to_json(json& j, const LeaguesLcdsTeamAggregatedStats& v) {
  j["playerAggregatedStatsList"] = v.playerAggregatedStatsList; 
  j["queueType"] = v.queueType; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LeaguesLcdsTeamAggregatedStats& v) {
  v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>(); 
  v.queueType = j.at("queueType").get<std::string>(); 
  v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>(); 
  }
}