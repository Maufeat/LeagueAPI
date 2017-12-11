#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LeaverBusterLcdsMatchmakingNotification { /**/ 
    std::vector<json> playerJoinFailures;/**/
  };
  static void to_json(json& j, const LeaverBusterLcdsMatchmakingNotification& v) { 
    j["playerJoinFailures"] = v.playerJoinFailures;
  }
  static void from_json(const json& j, LeaverBusterLcdsMatchmakingNotification& v) { 
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<json>>(); 
  }
} 