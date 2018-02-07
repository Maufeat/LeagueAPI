#pragma once
#include "../base_def.hpp" 
#include "RosterDynamicStateDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace lol {
  struct LolClashRosterDynamicStateNotification { 
    RosterDynamicStateDTO rosterDynamicState;
    LolClashRosterNotifyReason notifyReason;
    uint64_t sourcePlayerId; 
  };
  inline void to_json(json& j, const LolClashRosterDynamicStateNotification& v) {
    j["rosterDynamicState"] = v.rosterDynamicState; 
    j["notifyReason"] = v.notifyReason; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
  }
  inline void from_json(const json& j, LolClashRosterDynamicStateNotification& v) {
    v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
  }
}