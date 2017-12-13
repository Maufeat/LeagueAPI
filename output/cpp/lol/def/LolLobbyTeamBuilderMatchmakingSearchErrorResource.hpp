#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingSearchErrorResource { 
    uint64_t penalizedSummonerId;
    double penaltyTimeRemaining;
    std::string message;
    std::string errorType;
    int32_t id; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderMatchmakingSearchErrorResource& v) {
    j["penalizedSummonerId"] = v.penalizedSummonerId; 
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
    j["message"] = v.message; 
    j["errorType"] = v.errorType; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderMatchmakingSearchErrorResource& v) {
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>(); 
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
    v.message = j.at("message").get<std::string>(); 
    v.errorType = j.at("errorType").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}