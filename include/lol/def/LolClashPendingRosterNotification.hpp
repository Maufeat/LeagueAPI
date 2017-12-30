#pragma once
#include "../base_def.hpp" 
#include "LolClashNotifyReason.hpp"
#include "PendingRosterDTO.hpp"
namespace lol {
  struct LolClashPendingRosterNotification { 
    uint64_t targetPlayerId;
    PendingRosterDTO pendingRoster;
    uint64_t sourcePlayerId;
    LolClashNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashPendingRosterNotification& v) {
    j["targetPlayerId"] = v.targetPlayerId; 
    j["pendingRoster"] = v.pendingRoster; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashPendingRosterNotification& v) {
    v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>(); 
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
  }
}