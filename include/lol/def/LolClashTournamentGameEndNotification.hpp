#pragma once
#include "../base_def.hpp" 
#include "Bracket.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace lol {
  struct LolClashTournamentGameEndNotification { 
    LolClashRosterNotifyReason notifyReason;
    int64_t tournamentId;
    int64_t timestamp;
    int64_t currentMatchId;
    Bracket bracket; 
  };
  inline void to_json(json& j, const LolClashTournamentGameEndNotification& v) {
    j["notifyReason"] = v.notifyReason; 
    j["tournamentId"] = v.tournamentId; 
    j["timestamp"] = v.timestamp; 
    j["currentMatchId"] = v.currentMatchId; 
    j["bracket"] = v.bracket; 
  }
  inline void from_json(const json& j, LolClashTournamentGameEndNotification& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.currentMatchId = j.at("currentMatchId").get<int64_t>(); 
    v.bracket = j.at("bracket").get<Bracket>(); 
  }
}