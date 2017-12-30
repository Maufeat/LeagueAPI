#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDynamicStateDTO.hpp"
namespace lol {
  struct LolClashRosterDynamicStateNotification { 
    uint64_t sourcePlayerId;
    LolClashRosterNotifyReason notifyReason;
    RosterDynamicStateDTO rosterDynamicState; 
  };
  inline void to_json(json& j, const LolClashRosterDynamicStateNotification& v) {
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["notifyReason"] = v.notifyReason; 
    j["rosterDynamicState"] = v.rosterDynamicState; 
  }
  inline void from_json(const json& j, LolClashRosterDynamicStateNotification& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO>(); 
  }
}