#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPftGameflowGameDodgeState {  
    Invalid_e = 48,
    PartyDodged_e = 49,
    StrangerDodged_e = 50,
    TournamentDodged_e = 51,
  };
  inline void to_json(json& j, const LolPftGameflowGameDodgeState& v) {
    if(v == LolPftGameflowGameDodgeState::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == LolPftGameflowGameDodgeState::PartyDodged_e) {
      j = "PartyDodged";
      return;
    }
    if(v == LolPftGameflowGameDodgeState::StrangerDodged_e) {
      j = "StrangerDodged";
      return;
    }
    if(v == LolPftGameflowGameDodgeState::TournamentDodged_e) {
      j = "TournamentDodged";
      return;
    }
  }
  inline void from_json(const json& j, LolPftGameflowGameDodgeState& v) {
    if(j.get<std::string>() == "Invalid") {
      v = LolPftGameflowGameDodgeState::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "PartyDodged") {
      v = LolPftGameflowGameDodgeState::PartyDodged_e;
      return;
    } 
    if(j.get<std::string>() == "StrangerDodged") {
      v = LolPftGameflowGameDodgeState::StrangerDodged_e;
      return;
    } 
    if(j.get<std::string>() == "TournamentDodged") {
      v = LolPftGameflowGameDodgeState::TournamentDodged_e;
      return;
    } 
  }
}