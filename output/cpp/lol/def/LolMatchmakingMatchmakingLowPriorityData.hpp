#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchmakingMatchmakingLowPriorityData { 
    double penaltyTimeRemaining;
    double penaltyTime;
    std::vector<uint64_t> penalizedSummonerIds;
    std::string bustedLeaverAccessToken; 
  };
  void to_json(json& j, const LolMatchmakingMatchmakingLowPriorityData& v) {
  j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
  j["penaltyTime"] = v.penaltyTime; 
  j["penalizedSummonerIds"] = v.penalizedSummonerIds; 
  j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken; 
  }
  void from_json(const json& j, LolMatchmakingMatchmakingLowPriorityData& v) {
  v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
  v.penaltyTime = j.at("penaltyTime").get<double>(); 
  v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>(); 
  v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>(); 
  }
}