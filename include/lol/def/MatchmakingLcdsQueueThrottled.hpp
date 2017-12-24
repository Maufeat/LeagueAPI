#pragma once
#include "../base_def.hpp" 
#include "MatchmakingLcdsSummoner.hpp"
namespace lol {
  struct MatchmakingLcdsQueueThrottled { 
    MatchmakingLcdsSummoner summoner;
    int32_t queueId;
    std::string message;
    std::string reasonFailed; 
  };
  inline void to_json(json& j, const MatchmakingLcdsQueueThrottled& v) {
    j["summoner"] = v.summoner; 
    j["queueId"] = v.queueId; 
    j["message"] = v.message; 
    j["reasonFailed"] = v.reasonFailed; 
  }
  inline void from_json(const json& j, MatchmakingLcdsQueueThrottled& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.message = j.at("message").get<std::string>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  }
}