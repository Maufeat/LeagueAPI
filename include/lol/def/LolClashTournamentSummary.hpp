#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentState.hpp"
namespace lol {
  struct LolClashTournamentSummary { 
    int64_t bracketId;
    LolClashTournamentState state;
    std::string rosterId;
    int64_t tournamentId; 
  };
  inline void to_json(json& j, const LolClashTournamentSummary& v) {
    j["bracketId"] = v.bracketId; 
    j["state"] = v.state; 
    j["rosterId"] = v.rosterId; 
    j["tournamentId"] = v.tournamentId; 
  }
  inline void from_json(const json& j, LolClashTournamentSummary& v) {
    v.bracketId = j.at("bracketId").get<int64_t>(); 
    v.state = j.at("state").get<LolClashTournamentState>(); 
    v.rosterId = j.at("rosterId").get<std::string>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
}