#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyMatchmakingLowPriorityDataResource { 
    double penaltyTimeRemaining;
    double penaltyTime;
    std::string bustedLeaverAccessToken;
    std::vector<uint64_t> penalizedSummonerIds; 
  };
  void to_json(json& j, const LolLobbyLobbyMatchmakingLowPriorityDataResource& v) {
  j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
  j["penaltyTime"] = v.penaltyTime; 
  j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken; 
  j["penalizedSummonerIds"] = v.penalizedSummonerIds; 
  }
  void from_json(const json& j, LolLobbyLobbyMatchmakingLowPriorityDataResource& v) {
  v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
  v.penaltyTime = j.at("penaltyTime").get<double>(); 
  v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>(); 
  v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>(); 
  }
}