#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesQueue.hpp>"

namespace leagueapi {
  struct LolLeaguesGameflowGameData { /**/ 
    LolLeaguesQueue queue;/**/
  };
  static void to_json(json& j, const LolLeaguesGameflowGameData& v) { 
    j["queue"] = v.queue;
  }
  static void from_json(const json& j, LolLeaguesGameflowGameData& v) { 
    v.queue = j.at("queue").get<LolLeaguesQueue>(); 
  }
} 