#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameflowGameflowGameDodgeState { /**/ 
    Invalid_e = 48, /**/ 
    PartyDodged_e = 49, /**/ 
    StrangerDodged_e = 50, /**/ 
    TournamentDodged_e = 51, /**/ 
  };
  static void to_json(json& j, const LolGameflowGameflowGameDodgeState& v) {
    switch(v) { 
    case LolGameflowGameflowGameDodgeState::Invalid_e:
      j = "Invalid";
    break;
    case LolGameflowGameflowGameDodgeState::PartyDodged_e:
      j = "PartyDodged";
    break;
    case LolGameflowGameflowGameDodgeState::StrangerDodged_e:
      j = "StrangerDodged";
    break;
    case LolGameflowGameflowGameDodgeState::TournamentDodged_e:
      j = "TournamentDodged";
    break;
    };
  }
  static void from_json(const json& j, LolGameflowGameflowGameDodgeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = LolGameflowGameflowGameDodgeState::Invalid_e;
      return;
    } 
    if(s == "PartyDodged") {
      v = LolGameflowGameflowGameDodgeState::PartyDodged_e;
      return;
    } 
    if(s == "StrangerDodged") {
      v = LolGameflowGameflowGameDodgeState::StrangerDodged_e;
      return;
    } 
    if(s == "TournamentDodged") {
      v = LolGameflowGameflowGameDodgeState::TournamentDodged_e;
      return;
    } 
  }
} 