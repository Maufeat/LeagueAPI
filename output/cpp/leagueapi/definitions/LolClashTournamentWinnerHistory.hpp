#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashTournamentWinnerInfo.hpp>

namespace leagueapi {
  struct LolClashTournamentWinnerHistory { /**/ 
    std::vector<LolClashTournamentWinnerInfo> winners;/**/
    int64_t tournamentId;/**/
  };
  static void to_json(json& j, const LolClashTournamentWinnerHistory& v) { 
    j["winners"] = v.winners;
    j["tournamentId"] = v.tournamentId;
  }
  static void from_json(const json& j, LolClashTournamentWinnerHistory& v) { 
    v.winners = j.at("winners").get<std::vector<LolClashTournamentWinnerInfo>>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
} 