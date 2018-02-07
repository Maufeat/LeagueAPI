#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderGatekeeperRestriction { 
    uint64_t summonerId;
    std::string reason;
    uint32_t remainingMillis;
    std::string payload;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderGatekeeperRestriction& v) {
    j["summonerId"] = v.summonerId; 
    j["reason"] = v.reason; 
    j["remainingMillis"] = v.remainingMillis; 
    j["payload"] = v.payload; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderGatekeeperRestriction& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.remainingMillis = j.at("remainingMillis").get<uint32_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}