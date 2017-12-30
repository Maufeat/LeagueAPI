#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
namespace lol {
  struct LeaguesLcdsTeamAggregatedStats { 
    std::string queueType;
    LeaguesLcdsTeamIdDTO id;
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamAggregatedStats& v) {
    j["queueType"] = v.queueType; 
    j["id"] = v.id; 
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamAggregatedStats& v) {
    v.queueType = j.at("queueType").get<std::string>(); 
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>(); 
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>(); 
  }
}