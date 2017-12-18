#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MatchmakingLcdsQueueInfo { 
    int32_t queueId;
    uint64_t waitTime; 
  };
  inline void to_json(json& j, const MatchmakingLcdsQueueInfo& v) {
    j["queueId"] = v.queueId; 
    j["waitTime"] = v.waitTime; 
  }
  inline void from_json(const json& j, MatchmakingLcdsQueueInfo& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.waitTime = j.at("waitTime").get<uint64_t>(); 
  }
}