#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/PlayerStatSummaries.hpp>"

namespace leagueapi {
  struct PlayerLifetimeStats { /**/ 
    PlayerStatSummaries playerStatSummaries;/**/
  };
  static void to_json(json& j, const PlayerLifetimeStats& v) { 
    j["playerStatSummaries"] = v.playerStatSummaries;
  }
  static void from_json(const json& j, PlayerLifetimeStats& v) { 
    v.playerStatSummaries = j.at("playerStatSummaries").get<PlayerStatSummaries>(); 
  }
} 