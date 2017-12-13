#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderGatekeeperRestriction { 
    int32_t queueId;
    std::string reason;
    uint64_t summonerId;
    std::string payload;
    uint32_t remainingMillis; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderGatekeeperRestriction& v) {
  j["queueId"] = v.queueId; 
  j["reason"] = v.reason; 
  j["summonerId"] = v.summonerId; 
  j["payload"] = v.payload; 
  j["remainingMillis"] = v.remainingMillis; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderGatekeeperRestriction& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.reason = j.at("reason").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.payload = j.at("payload").get<std::string>(); 
  v.remainingMillis = j.at("remainingMillis").get<uint32_t>(); 
  }
}