#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampSelectLegacyQueue.hpp>"

namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameData { /**/ 
    LolChampSelectLegacyQueue queue;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyGameflowGameData& v) { 
    j["queue"] = v.queue;
  }
  static void from_json(const json& j, LolChampSelectLegacyGameflowGameData& v) { 
    v.queue = j.at("queue").get<LolChampSelectLegacyQueue>(); 
  }
} 