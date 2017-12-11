#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashTournament.hpp>
#include <leagueapi/definitions/LolClashTournamentWinnerHistory.hpp>

namespace leagueapi {
  struct LolClashTournamentHistoryAndWinners { /**/ 
    LolClashTournamentWinnerHistory tournamentWinners;/**/
    std::vector<LolClashTournament> tournamentHistory;/**/
  };
  static void to_json(json& j, const LolClashTournamentHistoryAndWinners& v) { 
    j["tournamentWinners"] = v.tournamentWinners;
    j["tournamentHistory"] = v.tournamentHistory;
  }
  static void from_json(const json& j, LolClashTournamentHistoryAndWinners& v) { 
    v.tournamentWinners = j.at("tournamentWinners").get<LolClashTournamentWinnerHistory>(); 
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<LolClashTournament>>(); 
  }
} 