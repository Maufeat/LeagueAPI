#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "Bracket.hpp"
namespace lol {
  struct LolClashTournamentGameEndNotification { 
    int64_t timestamp;
    int64_t tournamentId;
    int64_t currentMatchId;
    Bracket bracket;
    LolClashRosterNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashTournamentGameEndNotification& v) {
    j["timestamp"] = v.timestamp; 
    j["tournamentId"] = v.tournamentId; 
    j["currentMatchId"] = v.currentMatchId; 
    j["bracket"] = v.bracket; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashTournamentGameEndNotification& v) {
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.currentMatchId = j.at("currentMatchId").get<int64_t>(); 
    v.bracket = j.at("bracket").get<Bracket>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}