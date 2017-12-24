#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3 { 
    uint64_t summonerId;
    std::string payload;
    std::string reason;
    int32_t queueId;
    std::string summonerName;
    int64_t remainingMillis; 
  };
  inline void to_json(json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    j["summonerId"] = v.summonerId; 
    j["payload"] = v.payload; 
    j["reason"] = v.reason; 
    j["queueId"] = v.queueId; 
    j["summonerName"] = v.summonerName; 
    j["remainingMillis"] = v.remainingMillis; 
  }
  inline void from_json(const json& j, QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
  }
}