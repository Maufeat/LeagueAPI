#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderGatekeeperRestriction { 
    uint64_t summonerId;
    std::string payload;
    std::string reason;
    int32_t queueId;
    uint32_t remainingMillis; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderGatekeeperRestriction& v) {
    j["summonerId"] = v.summonerId; 
    j["payload"] = v.payload; 
    j["reason"] = v.reason; 
    j["queueId"] = v.queueId; 
    j["remainingMillis"] = v.remainingMillis; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderGatekeeperRestriction& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.remainingMillis = j.at("remainingMillis").get<uint32_t>(); 
  }
}