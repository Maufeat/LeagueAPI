#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyMatchmakingDodgeState { /**/ 
    Invalid_e = 48, /**/ 
    PartyDodged_e = 49, /**/ 
    StrangerDodged_e = 50, /**/ 
  };
  static void to_json(json& j, const LolLobbyMatchmakingDodgeState& v) {
    switch(v) { 
    case LolLobbyMatchmakingDodgeState::Invalid_e:
      j = "Invalid";
    break;
    case LolLobbyMatchmakingDodgeState::PartyDodged_e:
      j = "PartyDodged";
    break;
    case LolLobbyMatchmakingDodgeState::StrangerDodged_e:
      j = "StrangerDodged";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyMatchmakingDodgeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = LolLobbyMatchmakingDodgeState::Invalid_e;
      return;
    } 
    if(s == "PartyDodged") {
      v = LolLobbyMatchmakingDodgeState::PartyDodged_e;
      return;
    } 
    if(s == "StrangerDodged") {
      v = LolLobbyMatchmakingDodgeState::StrangerDodged_e;
      return;
    } 
  }
} 