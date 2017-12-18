#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDynamicStateDTO.hpp"
namespace lol {
  struct LolClashRosterDynamicStateNotification { 
    uint64_t sourcePlayerId;
    RosterDynamicStateDTO rosterDynamicState;
    LolClashRosterNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashRosterDynamicStateNotification& v) {
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["rosterDynamicState"] = v.rosterDynamicState; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashRosterDynamicStateNotification& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}