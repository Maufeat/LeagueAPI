#pragma once
#include "../base_def.hpp" 
#include "LolClashNotifyReason.hpp"
#include "PendingRosterDTO.hpp"
namespace lol {
  struct LolClashPendingRosterNotification { 
    PendingRosterDTO pendingRoster;
    LolClashNotifyReason notifyReason;
    uint64_t sourcePlayerId;
    uint64_t targetPlayerId; 
  };
  inline void to_json(json& j, const LolClashPendingRosterNotification& v) {
    j["pendingRoster"] = v.pendingRoster; 
    j["notifyReason"] = v.notifyReason; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["targetPlayerId"] = v.targetPlayerId; 
  }
  inline void from_json(const json& j, LolClashPendingRosterNotification& v) {
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>(); 
  }
}