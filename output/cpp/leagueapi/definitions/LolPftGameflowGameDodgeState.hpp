#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPftGameflowGameDodgeState { /**/ 
    Invalid_e = 48, /**/ 
    PartyDodged_e = 49, /**/ 
    StrangerDodged_e = 50, /**/ 
    TournamentDodged_e = 51, /**/ 
  };
  static void to_json(json& j, const LolPftGameflowGameDodgeState& v) {
    switch(v) { 
    case LolPftGameflowGameDodgeState::Invalid_e:
      j = "Invalid";
    break;
    case LolPftGameflowGameDodgeState::PartyDodged_e:
      j = "PartyDodged";
    break;
    case LolPftGameflowGameDodgeState::StrangerDodged_e:
      j = "StrangerDodged";
    break;
    case LolPftGameflowGameDodgeState::TournamentDodged_e:
      j = "TournamentDodged";
    break;
    };
  }
  static void from_json(const json& j, LolPftGameflowGameDodgeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = LolPftGameflowGameDodgeState::Invalid_e;
      return;
    } 
    if(s == "PartyDodged") {
      v = LolPftGameflowGameDodgeState::PartyDodged_e;
      return;
    } 
    if(s == "StrangerDodged") {
      v = LolPftGameflowGameDodgeState::StrangerDodged_e;
      return;
    } 
    if(s == "TournamentDodged") {
      v = LolPftGameflowGameDodgeState::TournamentDodged_e;
      return;
    } 
  }
} 