#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChampSelectLegacyGameflowGameDodgeState {  
    Invalid_e = 48,
    PartyDodged_e = 49,
    StrangerDodged_e = 50,
    TournamentDodged_e = 51,
  };
  void to_json(json& j, const LolChampSelectLegacyGameflowGameDodgeState& v) {
  if(v == LolChampSelectLegacyGameflowGameDodgeState::Invalid_e) {
    j = "Invalid";
    return;
  }
  if(v == LolChampSelectLegacyGameflowGameDodgeState::PartyDodged_e) {
    j = "PartyDodged";
    return;
  }
  if(v == LolChampSelectLegacyGameflowGameDodgeState::StrangerDodged_e) {
    j = "StrangerDodged";
    return;
  }
  if(v == LolChampSelectLegacyGameflowGameDodgeState::TournamentDodged_e) {
    j = "TournamentDodged";
    return;
  }
  }
  void from_json(const json& j, LolChampSelectLegacyGameflowGameDodgeState& v) {
  if(j.get<std::string>() == "Invalid") {
    v = LolChampSelectLegacyGameflowGameDodgeState::Invalid_e;
    return;
  } 
  if(j.get<std::string>() == "PartyDodged") {
    v = LolChampSelectLegacyGameflowGameDodgeState::PartyDodged_e;
    return;
  } 
  if(j.get<std::string>() == "StrangerDodged") {
    v = LolChampSelectLegacyGameflowGameDodgeState::StrangerDodged_e;
    return;
  } 
  if(j.get<std::string>() == "TournamentDodged") {
    v = LolChampSelectLegacyGameflowGameDodgeState::TournamentDodged_e;
    return;
  } 
  }
}