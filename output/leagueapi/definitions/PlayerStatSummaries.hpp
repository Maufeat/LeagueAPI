#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/PlayerStatSummary.hpp>"

namespace leagueapi {
  struct PlayerStatSummaries { /**/ 
    std::vector<PlayerStatSummary> playerStatSummarySet;/**/
  };
  static void to_json(json& j, const PlayerStatSummaries& v) { 
    j["playerStatSummarySet"] = v.playerStatSummarySet;
  }
  static void from_json(const json& j, PlayerStatSummaries& v) { 
    v.playerStatSummarySet = j.at("playerStatSummarySet").get<std::vector<PlayerStatSummary>>(); 
  }
} 