#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "PlayerDTO.hpp"
#include "RosterDTO.hpp"
namespace lol {
  struct LolClashRosterPlayerNotification { 
    RosterDTO roster;
    LolClashRosterNotifyReason notifyReason;
    PlayerDTO player;
    uint64_t sourcePlayerId; 
  };
  inline void to_json(json& j, const LolClashRosterPlayerNotification& v) {
    j["roster"] = v.roster; 
    j["notifyReason"] = v.notifyReason; 
    j["player"] = v.player; 
    j["sourcePlayerId"] = v.sourcePlayerId; 
  }
  inline void from_json(const json& j, LolClashRosterPlayerNotification& v) {
    v.roster = j.at("roster").get<RosterDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.player = j.at("player").get<PlayerDTO>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
  }
}