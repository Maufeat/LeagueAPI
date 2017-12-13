#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RosterDynamicStateDTO.hpp>
#include <lol/def/LolClashRosterNotifyReason.hpp>
namespace lol {
  struct LolClashRosterDynamicStateNotification { 
    uint64_t sourcePlayerId;
    RosterDynamicStateDTO rosterDynamicState;
    LolClashRosterNotifyReason notifyReason; 
  };
  void to_json(json& j, const LolClashRosterDynamicStateNotification& v) {
  j["sourcePlayerId"] = v.sourcePlayerId; 
  j["rosterDynamicState"] = v.rosterDynamicState; 
  j["notifyReason"] = v.notifyReason; 
  }
  void from_json(const json& j, LolClashRosterDynamicStateNotification& v) {
  v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
  v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO>(); 
  v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}