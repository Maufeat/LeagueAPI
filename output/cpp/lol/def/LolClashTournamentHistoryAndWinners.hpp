#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashTournament.hpp>
#include <lol/def/LolClashTournamentWinnerHistory.hpp>
namespace lol {
  struct LolClashTournamentHistoryAndWinners { 
    LolClashTournamentWinnerHistory tournamentWinners;
    std::vector<LolClashTournament> tournamentHistory; 
  };
  void to_json(json& j, const LolClashTournamentHistoryAndWinners& v) {
  j["tournamentWinners"] = v.tournamentWinners; 
  j["tournamentHistory"] = v.tournamentHistory; 
  }
  void from_json(const json& j, LolClashTournamentHistoryAndWinners& v) {
  v.tournamentWinners = j.at("tournamentWinners").get<LolClashTournamentWinnerHistory>(); 
  v.tournamentHistory = j.at("tournamentHistory").get<std::vector<LolClashTournament>>(); 
  }
}