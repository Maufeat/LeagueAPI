#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
namespace lol {
  struct LeaguesLcdsTeamAggregatedStats { 
    LeaguesLcdsTeamIdDTO id;
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList;
    std::string queueType; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamAggregatedStats& v) {
    j["id"] = v.id; 
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList; 
    j["queueType"] = v.queueType; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamAggregatedStats& v) {
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>(); 
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
  }
}