#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "RosterWithdraw.hpp"
namespace lol {
  struct LolClashRosterWithdrawNotification { 
    LolClashRosterNotifyReason notifyReason;
    int64_t rosterId;
    int64_t tournamentId;
    uint64_t sourcePlayerId;
    RosterWithdraw withdraw; 
  };
  inline void to_json(json& j, const LolClashRosterWithdrawNotification& v) {
    j["notifyReason"] = v.notifyReason; 
    j["rosterId"] = v.rosterId; 
    j["tournamentId"] = v.tournamentId; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["withdraw"] = v.withdraw; 
  }
  inline void from_json(const json& j, LolClashRosterWithdrawNotification& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
  }
}