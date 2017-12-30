#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingLowPriorityData { 
    std::vector<uint64_t> penalizedSummonerIds;
    double penaltyTimeRemaining;
    std::string bustedLeaverAccessToken;
    double penaltyTime; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingLowPriorityData& v) {
    j["penalizedSummonerIds"] = v.penalizedSummonerIds; 
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken; 
    j["penaltyTime"] = v.penaltyTime; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingLowPriorityData& v) {
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>(); 
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>(); 
    v.penaltyTime = j.at("penaltyTime").get<double>(); 
  }
}