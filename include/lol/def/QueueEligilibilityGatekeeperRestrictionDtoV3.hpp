#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3 { 
    std::string summonerName;
    uint64_t summonerId;
    std::string reason;
    int64_t remainingMillis;
    int32_t queueId;
    std::string payload; 
  };
  inline void to_json(json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["reason"] = v.reason; 
    j["remainingMillis"] = v.remainingMillis; 
    j["queueId"] = v.queueId; 
    j["payload"] = v.payload; 
  }
  inline void from_json(const json& j, QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
  }
}