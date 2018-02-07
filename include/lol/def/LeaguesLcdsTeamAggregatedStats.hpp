#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
#include "LeaguesLcdsTeamIdDTO.hpp"
namespace lol {
  struct LeaguesLcdsTeamAggregatedStats { 
    LeaguesLcdsTeamIdDTO id;
    std::string queueType;
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamAggregatedStats& v) {
    j["id"] = v.id; 
    j["queueType"] = v.queueType; 
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamAggregatedStats& v) {
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>(); 
  }
}