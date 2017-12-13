#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PendingRosterDTO.hpp>
#include <lol/def/LolClashNotifyReason.hpp>
namespace lol {
  struct LolClashPendingRosterNotification { 
    uint64_t targetPlayerId;
    uint64_t sourcePlayerId;
    PendingRosterDTO pendingRoster;
    LolClashNotifyReason notifyReason; 
  };
  void to_json(json& j, const LolClashPendingRosterNotification& v) {
  j["targetPlayerId"] = v.targetPlayerId; 
  j["sourcePlayerId"] = v.sourcePlayerId; 
  j["pendingRoster"] = v.pendingRoster; 
  j["notifyReason"] = v.notifyReason; 
  }
  void from_json(const json& j, LolClashPendingRosterNotification& v) {
  v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>(); 
  v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
  v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>(); 
  v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
  }
}