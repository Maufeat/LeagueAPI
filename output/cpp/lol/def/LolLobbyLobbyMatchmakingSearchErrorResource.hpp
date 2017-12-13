#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyMatchmakingSearchErrorResource { 
    std::string errorType;
    double penaltyTimeRemaining;
    std::string message;
    uint64_t penalizedSummonerId;
    int32_t id; 
  };
  void to_json(json& j, const LolLobbyLobbyMatchmakingSearchErrorResource& v) {
  j["errorType"] = v.errorType; 
  j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
  j["message"] = v.message; 
  j["penalizedSummonerId"] = v.penalizedSummonerId; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolLobbyLobbyMatchmakingSearchErrorResource& v) {
  v.errorType = j.at("errorType").get<std::string>(); 
  v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
  v.message = j.at("message").get<std::string>(); 
  v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}