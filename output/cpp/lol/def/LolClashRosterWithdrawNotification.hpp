#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashRosterNotifyReason.hpp>
#include <lol/def/RosterWithdraw.hpp>
namespace lol {
  struct LolClashRosterWithdrawNotification { 
    int64_t rosterId;
    LolClashRosterNotifyReason notifyReason;
    uint64_t sourcePlayerId;
    RosterWithdraw withdraw;
    int64_t tournamentId; 
  };
  void to_json(json& j, const LolClashRosterWithdrawNotification& v) {
  j["rosterId"] = v.rosterId; 
  j["notifyReason"] = v.notifyReason; 
  j["sourcePlayerId"] = v.sourcePlayerId; 
  j["withdraw"] = v.withdraw; 
  j["tournamentId"] = v.tournamentId; 
  }
  void from_json(const json& j, LolClashRosterWithdrawNotification& v) {
  v.rosterId = j.at("rosterId").get<int64_t>(); 
  v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
  v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
}