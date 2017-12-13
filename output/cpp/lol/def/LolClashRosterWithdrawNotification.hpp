#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RosterWithdraw.hpp>
#include <lol/def/LolClashRosterNotifyReason.hpp>
namespace lol {
  struct LolClashRosterWithdrawNotification { 
    int64_t rosterId;
    RosterWithdraw withdraw;
    int64_t tournamentId;
    uint64_t sourcePlayerId;
    LolClashRosterNotifyReason notifyReason; 
  };
  void to_json(json& j, const LolClashRosterWithdrawNotification& v) {
    j["rosterId"] = v.rosterId; 
    j["withdraw"] = v.withdraw; 
    j["tournamentId"] = v.tournamentId; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["notifyReason"] = v.notifyReason; 
  }
  void from_json(const json& j, LolClashRosterWithdrawNotification& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}