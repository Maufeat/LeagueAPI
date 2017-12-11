#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashPresenceState { /**/ 
    LOCKED_IN_e = 1, /**/ 
    NONE_e = 0, /**/ 
    SCOUTING_e = 2, /**/ 
  };
  static void to_json(json& j, const LolClashPresenceState& v) {
    switch(v) { 
    case LolClashPresenceState::LOCKED_IN_e:
      j = "LOCKED_IN";
    break;
    case LolClashPresenceState::NONE_e:
      j = "NONE";
    break;
    case LolClashPresenceState::SCOUTING_e:
      j = "SCOUTING";
    break;
    };
  }
  static void from_json(const json& j, LolClashPresenceState& v) {
    auto s = j.get<std::string>(); 
    if(s == "LOCKED_IN") {
      v = LolClashPresenceState::LOCKED_IN_e;
      return;
    } 
    if(s == "NONE") {
      v = LolClashPresenceState::NONE_e;
      return;
    } 
    if(s == "SCOUTING") {
      v = LolClashPresenceState::SCOUTING_e;
      return;
    } 
  }
} 