#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LeaguesLcdsLeagueRank.hpp>"
#include "<leagueapi/definitions/LeaguesLcdsQueueType.hpp>"
#include "<leagueapi/definitions/LeaguesLcdsLeagueTier.hpp>"

namespace leagueapi {
  struct LeagueTierAndRankDTO { /**/ 
    std::string playerOrTeamId;/**/
    std::string playerOrTeamName;/**/
    LeaguesLcdsLeagueTier tier;/**/
    LeaguesLcdsQueueType queueType;/**/
    LeaguesLcdsLeagueRank rank;/**/
  };
  static void to_json(json& j, const LeagueTierAndRankDTO& v) { 
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["tier"] = v.tier;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
  }
  static void from_json(const json& j, LeagueTierAndRankDTO& v) { 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
  }
} 