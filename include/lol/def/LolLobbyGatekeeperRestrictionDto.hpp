#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyGatekeeperRestrictionDto { 
    uint64_t accountId;
    std::string reason;
    int64_t remainingMillis;
    std::string payload;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolLobbyGatekeeperRestrictionDto& v) {
    j["accountId"] = v.accountId; 
    j["reason"] = v.reason; 
    j["remainingMillis"] = v.remainingMillis; 
    j["payload"] = v.payload; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolLobbyGatekeeperRestrictionDto& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}