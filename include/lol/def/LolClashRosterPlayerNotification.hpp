#pragma once
#include "../base_def.hpp" 
#include "PlayerDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDTO.hpp"
namespace lol {
  struct LolClashRosterPlayerNotification { 
    LolClashRosterNotifyReason notifyReason;
    uint64_t sourcePlayerId;
    RosterDTO roster;
    PlayerDTO player; 
  };
  inline void to_json(json& j, const LolClashRosterPlayerNotification& v) {
    j["notifyReason"] = v.notifyReason; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["roster"] = v.roster; 
    j["player"] = v.player; 
  }
  inline void from_json(const json& j, LolClashRosterPlayerNotification& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.roster = j.at("roster").get<RosterDTO>(); 
    v.player = j.at("player").get<PlayerDTO>(); 
  }
}