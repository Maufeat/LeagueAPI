#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyQueueAvailability.hpp>

namespace leagueapi {
  struct LolLobbyQueueCustomGame { /**/ 
    LolLobbyQueueAvailability queueAvailability;/**/
  };
  static void to_json(json& j, const LolLobbyQueueCustomGame& v) { 
    j["queueAvailability"] = v.queueAvailability;
  }
  static void from_json(const json& j, LolLobbyQueueCustomGame& v) { 
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>(); 
  }
} 