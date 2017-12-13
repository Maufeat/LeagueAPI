#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameflowGameflowGameDodgeState {  
    Invalid_e = 48,
    PartyDodged_e = 49,
    StrangerDodged_e = 50,
    TournamentDodged_e = 51,
  };
  void to_json(json& j, const LolGameflowGameflowGameDodgeState& v) {
  if(v == LolGameflowGameflowGameDodgeState::Invalid_e) {
    j = "Invalid";
    return;
  }
  if(v == LolGameflowGameflowGameDodgeState::PartyDodged_e) {
    j = "PartyDodged";
    return;
  }
  if(v == LolGameflowGameflowGameDodgeState::StrangerDodged_e) {
    j = "StrangerDodged";
    return;
  }
  if(v == LolGameflowGameflowGameDodgeState::TournamentDodged_e) {
    j = "TournamentDodged";
    return;
  }
  }
  void from_json(const json& j, LolGameflowGameflowGameDodgeState& v) {
  if(j.get<std::string>() == "Invalid") {
    v = LolGameflowGameflowGameDodgeState::Invalid_e;
    return;
  } 
  if(j.get<std::string>() == "PartyDodged") {
    v = LolGameflowGameflowGameDodgeState::PartyDodged_e;
    return;
  } 
  if(j.get<std::string>() == "StrangerDodged") {
    v = LolGameflowGameflowGameDodgeState::StrangerDodged_e;
    return;
  } 
  if(j.get<std::string>() == "TournamentDodged") {
    v = LolGameflowGameflowGameDodgeState::TournamentDodged_e;
    return;
  } 
  }
}