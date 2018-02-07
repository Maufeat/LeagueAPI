#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3 { 
    std::string summonerName;
    std::string reason;
    int64_t remainingMillis;
    std::string payload;
    int32_t queueId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    j["summonerName"] = v.summonerName; 
    j["reason"] = v.reason; 
    j["remainingMillis"] = v.remainingMillis; 
    j["payload"] = v.payload; 
    j["queueId"] = v.queueId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}