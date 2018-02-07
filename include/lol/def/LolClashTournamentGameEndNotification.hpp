#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
namespace lol {
  struct LolClashTournamentGameEndNotification { 
    int64_t tournamentId;
    int64_t bracketId;
    int64_t currentMatchId;
    LolClashRosterNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashTournamentGameEndNotification& v) {
    j["tournamentId"] = v.tournamentId; 
    j["bracketId"] = v.bracketId; 
    j["currentMatchId"] = v.currentMatchId; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashTournamentGameEndNotification& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
    v.currentMatchId = j.at("currentMatchId").get<int64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}