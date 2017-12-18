#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/TournamentDTO.hpp>
namespace lol {
  struct TournamentHistoryAndWinnersDTO { 
    std::string tournamentWinnersCompressed;
    std::vector<TournamentDTO> tournamentHistory; 
  };
  inline void to_json(json& j, const TournamentHistoryAndWinnersDTO& v) {
    j["tournamentWinnersCompressed"] = v.tournamentWinnersCompressed; 
    j["tournamentHistory"] = v.tournamentHistory; 
  }
  inline void from_json(const json& j, TournamentHistoryAndWinnersDTO& v) {
    v.tournamentWinnersCompressed = j.at("tournamentWinnersCompressed").get<std::string>(); 
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<TournamentDTO>>(); 
  }
}