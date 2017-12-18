#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
namespace lol {
  struct LeaguesLcdsTeamAggregatedStats { 
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList;
    std::string queueType;
    LeaguesLcdsTeamIdDTO id; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamAggregatedStats& v) {
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList; 
    j["queueType"] = v.queueType; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamAggregatedStats& v) {
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>(); 
  }
}