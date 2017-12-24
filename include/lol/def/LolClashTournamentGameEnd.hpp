#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTournamentGameEnd { 
    int64_t bracketId;
    int64_t tournamentId; 
  };
  inline void to_json(json& j, const LolClashTournamentGameEnd& v) {
    j["bracketId"] = v.bracketId; 
    j["tournamentId"] = v.tournamentId; 
  }
  inline void from_json(const json& j, LolClashTournamentGameEnd& v) {
    v.bracketId = j.at("bracketId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
}