#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyMatchmakingSearchErrorResource { 
    std::string message;
    int32_t id;
    double penaltyTimeRemaining;
    std::string errorType;
    uint64_t penalizedSummonerId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyMatchmakingSearchErrorResource& v) {
    j["message"] = v.message; 
    j["id"] = v.id; 
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
    j["errorType"] = v.errorType; 
    j["penalizedSummonerId"] = v.penalizedSummonerId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyMatchmakingSearchErrorResource& v) {
    v.message = j.at("message").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
    v.errorType = j.at("errorType").get<std::string>(); 
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>(); 
  }
}