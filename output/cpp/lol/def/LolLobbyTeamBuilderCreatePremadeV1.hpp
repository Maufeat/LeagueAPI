#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderCreatePremadeV1 { 
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderCreatePremadeV1& v) {
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderCreatePremadeV1& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}