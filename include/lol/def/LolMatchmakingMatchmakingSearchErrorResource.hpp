#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchmakingMatchmakingSearchErrorResource { 
    int32_t id;
    std::string errorType;
    double penaltyTimeRemaining;
    std::string message;
    uint64_t penalizedSummonerId; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingSearchErrorResource& v) {
    j["id"] = v.id; 
    j["errorType"] = v.errorType; 
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining; 
    j["message"] = v.message; 
    j["penalizedSummonerId"] = v.penalizedSummonerId; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingSearchErrorResource& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.errorType = j.at("errorType").get<std::string>(); 
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>(); 
    v.message = j.at("message").get<std::string>(); 
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>(); 
  }
}