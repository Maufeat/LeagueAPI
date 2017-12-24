#pragma once
#include "../base_def.hpp" 
#include "PendingRosterDTO.hpp"
#include "LolClashNotifyReason.hpp"
namespace lol {
  struct LolClashPendingRosterNotification { 
    uint64_t targetPlayerId;
    LolClashNotifyReason notifyReason;
    uint64_t sourcePlayerId;
    PendingRosterDTO pendingRoster; 
  };
  inline void to_json(json& j, const LolClashPendingRosterNotification& v) {
    j["targetPlayerId"] = v.targetPlayerId; 
    j["notifyReason"] = v.notifyReason; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["pendingRoster"] = v.pendingRoster; 
  }
  inline void from_json(const json& j, LolClashPendingRosterNotification& v) {
    v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>(); 
  }
}