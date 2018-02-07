#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentState.hpp"
namespace lol {
  struct LolClashTournamentSummary { 
    LolClashTournamentState state;
    int64_t tournamentId;
    std::string rosterId;
    int64_t bracketId; 
  };
  inline void to_json(json& j, const LolClashTournamentSummary& v) {
    j["state"] = v.state; 
    j["tournamentId"] = v.tournamentId; 
    j["rosterId"] = v.rosterId; 
    j["bracketId"] = v.bracketId; 
  }
  inline void from_json(const json& j, LolClashTournamentSummary& v) {
    v.state = j.at("state").get<LolClashTournamentState>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rosterId = j.at("rosterId").get<std::string>(); 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
  }
}