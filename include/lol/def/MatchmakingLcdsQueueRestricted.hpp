#pragma once
#include "../base_def.hpp" 
#include "MatchmakingLcdsSummoner.hpp"
namespace lol {
  struct MatchmakingLcdsQueueRestricted { 
    MatchmakingLcdsSummoner summoner;
    std::string reasonFailed;
    int32_t queueId;
    std::string message; 
  };
  inline void to_json(json& j, const MatchmakingLcdsQueueRestricted& v) {
    j["summoner"] = v.summoner; 
    j["reasonFailed"] = v.reasonFailed; 
    j["queueId"] = v.queueId; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, MatchmakingLcdsQueueRestricted& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}