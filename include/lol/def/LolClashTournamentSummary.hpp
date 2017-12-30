#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentState.hpp"
namespace lol {
  struct LolClashTournamentSummary { 
    int64_t tournamentId;
    std::string rosterId;
    int64_t bracketId;
    LolClashTournamentState state; 
  };
  inline void to_json(json& j, const LolClashTournamentSummary& v) {
    j["tournamentId"] = v.tournamentId; 
    j["rosterId"] = v.rosterId; 
    j["bracketId"] = v.bracketId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolClashTournamentSummary& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rosterId = j.at("rosterId").get<std::string>(); 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
    v.state = j.at("state").get<LolClashTournamentState>(); 
  }
}