#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyMatchmakingLowPriorityDataResource { 
    std::vector<uint64_t> penalizedSummonerIds;
    double penaltyTime;
    double penaltyTimeRemaining;
    std::string bustedLeaverAccessToken; 
  };
  inline void to_json(json& j, const LolLobbyLobbyMatchmakingLowPriorityDataResource& v) {
    j["penalizedSummonerIds"] = v.penalizedSummonerIds; 
    j["penaltyTime"] = v.penaltyTime; 
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken; 
  }
  inline void from_json(const json& j, LolLobbyLobbyMatchmakingLowPriorityDataResource& v) {
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>(); 
    v.penaltyTime = j.at("penaltyTime").get<double>(); 
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>(); 
  }
}