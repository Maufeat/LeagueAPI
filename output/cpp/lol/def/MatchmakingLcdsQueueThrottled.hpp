#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MatchmakingLcdsSummoner.hpp>
namespace lol {
  struct MatchmakingLcdsQueueThrottled { 
    int32_t queueId;
    std::string message;
    std::string reasonFailed;
    MatchmakingLcdsSummoner summoner; 
  };
  void to_json(json& j, const MatchmakingLcdsQueueThrottled& v) {
  j["queueId"] = v.queueId; 
  j["message"] = v.message; 
  j["reasonFailed"] = v.reasonFailed; 
  j["summoner"] = v.summoner; 
  }
  void from_json(const json& j, MatchmakingLcdsQueueThrottled& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.message = j.at("message").get<std::string>(); 
  v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
  }
}