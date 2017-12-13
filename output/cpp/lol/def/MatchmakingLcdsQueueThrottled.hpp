#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MatchmakingLcdsSummoner.hpp>
namespace lol {
  struct MatchmakingLcdsQueueThrottled { 
    MatchmakingLcdsSummoner summoner;
    std::string reasonFailed;
    std::string message;
    int32_t queueId; 
  };
  void to_json(json& j, const MatchmakingLcdsQueueThrottled& v) {
    j["summoner"] = v.summoner; 
    j["reasonFailed"] = v.reasonFailed; 
    j["message"] = v.message; 
    j["queueId"] = v.queueId; 
  }
  void from_json(const json& j, MatchmakingLcdsQueueThrottled& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}