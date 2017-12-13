#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyGatekeeperRestrictionDto { 
    int64_t remainingMillis;
    std::string reason;
    int32_t queueId;
    std::string payload;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolLobbyGatekeeperRestrictionDto& v) {
  j["remainingMillis"] = v.remainingMillis; 
  j["reason"] = v.reason; 
  j["queueId"] = v.queueId; 
  j["payload"] = v.payload; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolLobbyGatekeeperRestrictionDto& v) {
  v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
  v.reason = j.at("reason").get<std::string>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.payload = j.at("payload").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}