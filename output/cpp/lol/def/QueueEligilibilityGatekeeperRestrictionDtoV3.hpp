#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3 { 
    int64_t remainingMillis;
    std::string payload;
    std::string summonerName;
    uint64_t summonerId;
    int32_t queueId;
    std::string reason; 
  };
  inline void to_json(json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    j["remainingMillis"] = v.remainingMillis; 
    j["payload"] = v.payload; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["queueId"] = v.queueId; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}