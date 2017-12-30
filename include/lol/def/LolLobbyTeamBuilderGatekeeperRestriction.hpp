#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderGatekeeperRestriction { 
    uint32_t remainingMillis;
    std::string reason;
    uint64_t summonerId;
    int32_t queueId;
    std::string payload; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderGatekeeperRestriction& v) {
    j["remainingMillis"] = v.remainingMillis; 
    j["reason"] = v.reason; 
    j["summonerId"] = v.summonerId; 
    j["queueId"] = v.queueId; 
    j["payload"] = v.payload; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderGatekeeperRestriction& v) {
    v.remainingMillis = j.at("remainingMillis").get<uint32_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
  }
}