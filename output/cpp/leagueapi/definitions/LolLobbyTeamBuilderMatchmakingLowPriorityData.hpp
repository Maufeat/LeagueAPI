#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingLowPriorityData { /**/ 
    double penaltyTimeRemaining;/**/
    double penaltyTime;/**/
    std::vector<uint64_t> penalizedSummonerIds;/**/
    std::string bustedLeaverAccessToken;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingLowPriorityData& v) { 
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["penaltyTime"] = v.penaltyTime;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingLowPriorityData& v) { 
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
    v.penaltyTime = j.at("penaltyTime").get<double>(); 
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>(); 
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>(); 
  }
} 