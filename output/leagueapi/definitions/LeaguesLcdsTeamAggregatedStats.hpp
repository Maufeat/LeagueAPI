#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LeaguesLcdsPlayerAggregatedStats.hpp>"
#include "<leagueapi/definitions/LeaguesLcdsTeamIdDTO.hpp>"

namespace leagueapi {
  struct LeaguesLcdsTeamAggregatedStats { /**/ 
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList;/**/
    LeaguesLcdsTeamIdDTO id;/**/
    std::string queueType;/**/
  };
  static void to_json(json& j, const LeaguesLcdsTeamAggregatedStats& v) { 
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList;
    j["id"] = v.id;
    j["queueType"] = v.queueType;
  }
  static void from_json(const json& j, LeaguesLcdsTeamAggregatedStats& v) { 
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>(); 
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
  }
} 