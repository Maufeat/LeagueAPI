#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyMatchmakingSearchErrorResource { 
    int32_t id;
    std::string errorType;
    uint64_t penalizedSummonerId;
    double penaltyTimeRemaining;
    std::string message; 
  };
  inline void to_json(json& j, const LolLobbyLobbyMatchmakingSearchErrorResource& v) {
    j["id"] = v.id; 
    j["errorType"] = v.errorType; 
    j["penalizedSummonerId"] = v.penalizedSummonerId; 
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, LolLobbyLobbyMatchmakingSearchErrorResource& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.errorType = j.at("errorType").get<std::string>(); 
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>(); 
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}