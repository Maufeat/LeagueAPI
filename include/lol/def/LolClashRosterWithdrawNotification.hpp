#pragma once
#include "../base_def.hpp" 
#include "RosterWithdraw.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace lol {
  struct LolClashRosterWithdrawNotification { 
    int32_t version;
    int64_t tournamentId;
    int64_t rosterId;
    RosterWithdraw withdraw;
    LolClashRosterNotifyReason notifyReason;
    uint64_t sourcePlayerId; 
  };
  inline void to_json(json& j, const LolClashRosterWithdrawNotification& v) {
    j["version"] = v.version; 
    j["tournamentId"] = v.tournamentId; 
    j["rosterId"] = v.rosterId; 
    j["withdraw"] = v.withdraw; 
    j["notifyReason"] = v.notifyReason; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
  }
  inline void from_json(const json& j, LolClashRosterWithdrawNotification& v) {
    v.version = j.at("version").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
  }
}