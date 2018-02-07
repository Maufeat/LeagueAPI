#pragma once
#include "../base_def.hpp" 
#include "TournamentDTO.hpp"
namespace lol {
  struct TournamentHistoryAndWinnersDTO { 
    std::vector<TournamentDTO> tournamentHistory;
    std::string tournamentWinnersCompressed; 
  };
  inline void to_json(json& j, const TournamentHistoryAndWinnersDTO& v) {
    j["tournamentHistory"] = v.tournamentHistory; 
    j["tournamentWinnersCompressed"] = v.tournamentWinnersCompressed; 
  }
  inline void from_json(const json& j, TournamentHistoryAndWinnersDTO& v) {
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<TournamentDTO>>(); 
    v.tournamentWinnersCompressed = j.at("tournamentWinnersCompressed").get<std::string>(); 
  }
}