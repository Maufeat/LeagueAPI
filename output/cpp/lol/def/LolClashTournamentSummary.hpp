#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashTournamentState.hpp>
namespace lol {
  struct LolClashTournamentSummary { 
    std::string rosterId;
    LolClashTournamentState state;
    int64_t bracketId;
    int64_t tournamentId; 
  };
  void to_json(json& j, const LolClashTournamentSummary& v) {
    j["rosterId"] = v.rosterId; 
    j["state"] = v.state; 
    j["bracketId"] = v.bracketId; 
    j["tournamentId"] = v.tournamentId; 
  }
  void from_json(const json& j, LolClashTournamentSummary& v) {
    v.rosterId = j.at("rosterId").get<std::string>(); 
    v.state = j.at("state").get<LolClashTournamentState>(); 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
}