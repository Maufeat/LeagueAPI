#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashTournamentState.hpp>
namespace lol {
  struct LolClashTournamentSummary { 
    LolClashTournamentState state;
    std::string rosterId;
    int64_t bracketId;
    int64_t tournamentId; 
  };
  void to_json(json& j, const LolClashTournamentSummary& v) {
  j["state"] = v.state; 
  j["rosterId"] = v.rosterId; 
  j["bracketId"] = v.bracketId; 
  j["tournamentId"] = v.tournamentId; 
  }
  void from_json(const json& j, LolClashTournamentSummary& v) {
  v.state = j.at("state").get<LolClashTournamentState>(); 
  v.rosterId = j.at("rosterId").get<std::string>(); 
  v.bracketId = j.at("bracketId").get<int64_t>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
}