#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyGatekeeperRestrictionDto { 
    int32_t queueId;
    std::string payload;
    std::string reason;
    uint64_t accountId;
    int64_t remainingMillis; 
  };
  void to_json(json& j, const LolLobbyGatekeeperRestrictionDto& v) {
  j["queueId"] = v.queueId; 
  j["payload"] = v.payload; 
  j["reason"] = v.reason; 
  j["accountId"] = v.accountId; 
  j["remainingMillis"] = v.remainingMillis; 
  }
  void from_json(const json& j, LolLobbyGatekeeperRestrictionDto& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.payload = j.at("payload").get<std::string>(); 
  v.reason = j.at("reason").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
  }
}