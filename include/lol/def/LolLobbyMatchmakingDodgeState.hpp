#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLobbyMatchmakingDodgeState {  
    Invalid_e = 48,
    PartyDodged_e = 49,
    StrangerDodged_e = 50,
  };
  inline void to_json(json& j, const LolLobbyMatchmakingDodgeState& v) {
    if(v == LolLobbyMatchmakingDodgeState::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == LolLobbyMatchmakingDodgeState::PartyDodged_e) {
      j = "PartyDodged";
      return;
    }
    if(v == LolLobbyMatchmakingDodgeState::StrangerDodged_e) {
      j = "StrangerDodged";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyMatchmakingDodgeState& v) {
    if(j.get<std::string>() == "Invalid") {
      v = LolLobbyMatchmakingDodgeState::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "PartyDodged") {
      v = LolLobbyMatchmakingDodgeState::PartyDodged_e;
      return;
    } 
    if(j.get<std::string>() == "StrangerDodged") {
      v = LolLobbyMatchmakingDodgeState::StrangerDodged_e;
      return;
    } 
  }
}