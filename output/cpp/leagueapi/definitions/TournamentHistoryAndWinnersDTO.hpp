#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/TournamentDTO.hpp>

namespace leagueapi {
  struct TournamentHistoryAndWinnersDTO { /**/ 
    std::string tournamentWinnersCompressed;/**/
    std::vector<TournamentDTO> tournamentHistory;/**/
  };
  static void to_json(json& j, const TournamentHistoryAndWinnersDTO& v) { 
    j["tournamentWinnersCompressed"] = v.tournamentWinnersCompressed;
    j["tournamentHistory"] = v.tournamentHistory;
  }
  static void from_json(const json& j, TournamentHistoryAndWinnersDTO& v) { 
    v.tournamentWinnersCompressed = j.at("tournamentWinnersCompressed").get<std::string>(); 
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<TournamentDTO>>(); 
  }
} 