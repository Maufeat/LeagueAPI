#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchmakingGameflowQueue.hpp>

namespace leagueapi {
  struct LolMatchmakingGameflowGameData { /**/ 
    LolMatchmakingGameflowQueue queue;/**/
  };
  static void to_json(json& j, const LolMatchmakingGameflowGameData& v) { 
    j["queue"] = v.queue;
  }
  static void from_json(const json& j, LolMatchmakingGameflowGameData& v) { 
    v.queue = j.at("queue").get<LolMatchmakingGameflowQueue>(); 
  }
} 