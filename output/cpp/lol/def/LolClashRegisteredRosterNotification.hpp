#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RosterDTO.hpp>
#include <lol/def/LolClashRosterNotifyReason.hpp>
namespace lol {
  struct LolClashRegisteredRosterNotification { 
    RosterDTO roster;
    LolClashRosterNotifyReason notifyReason; 
  };
  void to_json(json& j, const LolClashRegisteredRosterNotification& v) {
  j["roster"] = v.roster; 
  j["notifyReason"] = v.notifyReason; 
  }
  void from_json(const json& j, LolClashRegisteredRosterNotification& v) {
  v.roster = j.at("roster").get<RosterDTO>(); 
  v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}