#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashRosterNotifyReason.hpp>
#include <lol/def/RosterDynamicStateDTO.hpp>
namespace lol {
  struct LolClashRosterDynamicStateNotification { 
    LolClashRosterNotifyReason notifyReason;
    uint64_t sourcePlayerId;
    RosterDynamicStateDTO rosterDynamicState; 
  };
  void to_json(json& j, const LolClashRosterDynamicStateNotification& v) {
  j["notifyReason"] = v.notifyReason; 
  j["sourcePlayerId"] = v.sourcePlayerId; 
  j["rosterDynamicState"] = v.rosterDynamicState; 
  }
  void from_json(const json& j, LolClashRosterDynamicStateNotification& v) {
  v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
  v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO>(); 
  }
}