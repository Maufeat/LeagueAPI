#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsPlayerAggregatedStats.hpp>
#include <lol/def/LeaguesLcdsTeamIdDTO.hpp>
namespace lol {
  struct LeaguesLcdsTeamAggregatedStats { 
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList;
    LeaguesLcdsTeamIdDTO id;
    std::string queueType; 
  };
  void to_json(json& j, const LeaguesLcdsTeamAggregatedStats& v) {
  j["playerAggregatedStatsList"] = v.playerAggregatedStatsList; 
  j["id"] = v.id; 
  j["queueType"] = v.queueType; 
  }
  void from_json(const json& j, LeaguesLcdsTeamAggregatedStats& v) {
  v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>(); 
  v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>(); 
  v.queueType = j.at("queueType").get<std::string>(); 
  }
}