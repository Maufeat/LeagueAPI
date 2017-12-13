#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashMatchmakingDodgeState {  
    Invalid_e = 48,
    PartyDodged_e = 49,
    StrangerDodged_e = 50,
    TournamentDodged_e = 51,
  };
  void to_json(json& j, const LolClashMatchmakingDodgeState& v) {
  if(v == LolClashMatchmakingDodgeState::Invalid_e) {
    j = "Invalid";
    return;
  }
  if(v == LolClashMatchmakingDodgeState::PartyDodged_e) {
    j = "PartyDodged";
    return;
  }
  if(v == LolClashMatchmakingDodgeState::StrangerDodged_e) {
    j = "StrangerDodged";
    return;
  }
  if(v == LolClashMatchmakingDodgeState::TournamentDodged_e) {
    j = "TournamentDodged";
    return;
  }
  }
  void from_json(const json& j, LolClashMatchmakingDodgeState& v) {
  if(j.get<std::string>() == "Invalid") {
    v = LolClashMatchmakingDodgeState::Invalid_e;
    return;
  } 
  if(j.get<std::string>() == "PartyDodged") {
    v = LolClashMatchmakingDodgeState::PartyDodged_e;
    return;
  } 
  if(j.get<std::string>() == "StrangerDodged") {
    v = LolClashMatchmakingDodgeState::StrangerDodged_e;
    return;
  } 
  if(j.get<std::string>() == "TournamentDodged") {
    v = LolClashMatchmakingDodgeState::TournamentDodged_e;
    return;
  } 
  }
}