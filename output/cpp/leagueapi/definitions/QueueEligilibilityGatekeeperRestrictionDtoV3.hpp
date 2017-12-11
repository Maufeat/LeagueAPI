#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3 { /**/ 
    int32_t queueId;/**/
    std::string reason;/**/
    uint64_t summonerId;/**/
    std::string payload;/**/
    int64_t remainingMillis;/**/
    std::string summonerName;/**/
  };
  static void to_json(json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3& v) { 
    j["queueId"] = v.queueId;
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["payload"] = v.payload;
    j["remainingMillis"] = v.remainingMillis;
    j["summonerName"] = v.summonerName;
  }
  static void from_json(const json& j, QueueEligilibilityGatekeeperRestrictionDtoV3& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
  }
} 