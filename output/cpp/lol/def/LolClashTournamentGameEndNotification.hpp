#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/Bracket.hpp>
#include <lol/def/LolClashRosterNotifyReason.hpp>
namespace lol {
  struct LolClashTournamentGameEndNotification { 
    int64_t currentMatchId;
    int64_t tournamentId;
    int64_t timestamp;
    Bracket bracket;
    LolClashRosterNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashTournamentGameEndNotification& v) {
    j["currentMatchId"] = v.currentMatchId; 
    j["tournamentId"] = v.tournamentId; 
    j["timestamp"] = v.timestamp; 
    j["bracket"] = v.bracket; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashTournamentGameEndNotification& v) {
    v.currentMatchId = j.at("currentMatchId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.bracket = j.at("bracket").get<Bracket>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}