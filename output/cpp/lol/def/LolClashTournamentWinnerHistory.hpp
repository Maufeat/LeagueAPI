#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashTournamentWinnerInfo.hpp>
namespace lol {
  struct LolClashTournamentWinnerHistory { 
    int64_t tournamentId;
    std::vector<LolClashTournamentWinnerInfo> winners; 
  };
  inline void to_json(json& j, const LolClashTournamentWinnerHistory& v) {
    j["tournamentId"] = v.tournamentId; 
    j["winners"] = v.winners; 
  }
  inline void from_json(const json& j, LolClashTournamentWinnerHistory& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.winners = j.at("winners").get<std::vector<LolClashTournamentWinnerInfo>>(); 
  }
}