#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "PlayerDTO.hpp"
#include "RosterDTO.hpp"
namespace lol {
  struct LolClashRosterPlayerNotification { 
    uint64_t sourcePlayerId;
    PlayerDTO player;
    RosterDTO roster;
    LolClashRosterNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashRosterPlayerNotification& v) {
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["player"] = v.player; 
    j["roster"] = v.roster; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashRosterPlayerNotification& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.player = j.at("player").get<PlayerDTO>(); 
    v.roster = j.at("roster").get<RosterDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
}