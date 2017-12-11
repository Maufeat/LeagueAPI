#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderCreatePremadeV1 { /**/ 
    int32_t queueId;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderCreatePremadeV1& v) { 
    j["queueId"] = v.queueId;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderCreatePremadeV1& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
} 