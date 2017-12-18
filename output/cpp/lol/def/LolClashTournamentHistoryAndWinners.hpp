#pragma once
#include "../base_def.hpp" 
#include "LolClashTournament.hpp"
#include "LolClashTournamentWinnerHistory.hpp"
namespace lol {
  struct LolClashTournamentHistoryAndWinners { 
    LolClashTournamentWinnerHistory tournamentWinners;
    std::vector<LolClashTournament> tournamentHistory; 
  };
  inline void to_json(json& j, const LolClashTournamentHistoryAndWinners& v) {
    j["tournamentWinners"] = v.tournamentWinners; 
    j["tournamentHistory"] = v.tournamentHistory; 
  }
  inline void from_json(const json& j, LolClashTournamentHistoryAndWinners& v) {
    v.tournamentWinners = j.at("tournamentWinners").get<LolClashTournamentWinnerHistory>(); 
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<LolClashTournament>>(); 
  }
}