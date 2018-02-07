#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentWinnerHistory.hpp"
#include "LolClashTournament.hpp"
namespace lol {
  struct LolClashTournamentHistoryAndWinners { 
    std::vector<LolClashTournament> tournamentHistory;
    LolClashTournamentWinnerHistory tournamentWinners; 
  };
  inline void to_json(json& j, const LolClashTournamentHistoryAndWinners& v) {
    j["tournamentHistory"] = v.tournamentHistory; 
    j["tournamentWinners"] = v.tournamentWinners; 
  }
  inline void from_json(const json& j, LolClashTournamentHistoryAndWinners& v) {
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<LolClashTournament>>(); 
    v.tournamentWinners = j.at("tournamentWinners").get<LolClashTournamentWinnerHistory>(); 
  }
}