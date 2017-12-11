#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLoadoutsQueue.hpp>"

namespace leagueapi {
  struct LolLoadoutsGameflowGameData { /**/ 
    LolLoadoutsQueue queue;/**/
  };
  static void to_json(json& j, const LolLoadoutsGameflowGameData& v) { 
    j["queue"] = v.queue;
  }
  static void from_json(const json& j, LolLoadoutsGameflowGameData& v) { 
    v.queue = j.at("queue").get<LolLoadoutsQueue>(); 
  }
} 