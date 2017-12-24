#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDTO.hpp"
namespace lol {
  struct LolClashRegisteredRosterNotification { 
    LolClashRosterNotifyReason notifyReason;
    RosterDTO roster; 
  };
  inline void to_json(json& j, const LolClashRegisteredRosterNotification& v) {
    j["notifyReason"] = v.notifyReason; 
    j["roster"] = v.roster; 
  }
  inline void from_json(const json& j, LolClashRegisteredRosterNotification& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.roster = j.at("roster").get<RosterDTO>(); 
  }
}