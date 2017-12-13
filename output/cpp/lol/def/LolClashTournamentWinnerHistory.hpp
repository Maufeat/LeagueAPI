#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashTournamentWinnerInfo.hpp>
namespace lol {
  struct LolClashTournamentWinnerHistory { 
    std::vector<LolClashTournamentWinnerInfo> winners;
    int64_t tournamentId; 
  };
  void to_json(json& j, const LolClashTournamentWinnerHistory& v) {
  j["winners"] = v.winners; 
  j["tournamentId"] = v.tournamentId; 
  }
  void from_json(const json& j, LolClashTournamentWinnerHistory& v) {
  v.winners = j.at("winners").get<std::vector<LolClashTournamentWinnerInfo>>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
}