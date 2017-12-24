#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MatchmakingLcdsQueueInfo { 
    uint64_t waitTime;
    int32_t queueId; 
  };
  inline void to_json(json& j, const MatchmakingLcdsQueueInfo& v) {
    j["waitTime"] = v.waitTime; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, MatchmakingLcdsQueueInfo& v) {
    v.waitTime = j.at("waitTime").get<uint64_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}