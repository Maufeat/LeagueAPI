#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDTO.hpp"
namespace lol {
  struct LolClashRegisteredRosterNotification { 
    RosterDTO roster;
    LolClashRosterNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashRegisteredRosterNotification& v) {
    j["roster"] = v.roster; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashRegisteredRosterNotification& v) {
    v.roster = j.at("roster").get<RosterDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}