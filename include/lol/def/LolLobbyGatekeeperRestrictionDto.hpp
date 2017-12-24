#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyGatekeeperRestrictionDto { 
    std::string payload;
    std::string reason;
    int32_t queueId;
    uint64_t accountId;
    int64_t remainingMillis; 
  };
  inline void to_json(json& j, const LolLobbyGatekeeperRestrictionDto& v) {
    j["payload"] = v.payload; 
    j["reason"] = v.reason; 
    j["queueId"] = v.queueId; 
    j["accountId"] = v.accountId; 
    j["remainingMillis"] = v.remainingMillis; 
  }
  inline void from_json(const json& j, LolLobbyGatekeeperRestrictionDto& v) {
    v.payload = j.at("payload").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.remainingMillis = j.at("remainingMillis").get<int64_t>(); 
  }
}