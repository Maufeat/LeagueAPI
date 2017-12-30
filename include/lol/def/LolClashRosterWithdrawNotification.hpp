#pragma once
#include "../base_def.hpp" 
#include "RosterWithdraw.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace lol {
  struct LolClashRosterWithdrawNotification { 
    int64_t tournamentId;
    int64_t rosterId;
    RosterWithdraw withdraw;
    uint64_t sourcePlayerId;
    LolClashRosterNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashRosterWithdrawNotification& v) {
    j["tournamentId"] = v.tournamentId; 
    j["rosterId"] = v.rosterId; 
    j["withdraw"] = v.withdraw; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashRosterWithdrawNotification& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}