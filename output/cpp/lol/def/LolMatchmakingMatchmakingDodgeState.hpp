#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolMatchmakingMatchmakingDodgeState {  
    Invalid_e = 48,
    PartyDodged_e = 49,
    StrangerDodged_e = 50,
    TournamentDodged_e = 51,
  };
  void to_json(json& j, const LolMatchmakingMatchmakingDodgeState& v) {
  if(v == LolMatchmakingMatchmakingDodgeState::Invalid_e) {
    j = "Invalid";
    return;
  }
  if(v == LolMatchmakingMatchmakingDodgeState::PartyDodged_e) {
    j = "PartyDodged";
    return;
  }
  if(v == LolMatchmakingMatchmakingDodgeState::StrangerDodged_e) {
    j = "StrangerDodged";
    return;
  }
  if(v == LolMatchmakingMatchmakingDodgeState::TournamentDodged_e) {
    j = "TournamentDodged";
    return;
  }
  }
  void from_json(const json& j, LolMatchmakingMatchmakingDodgeState& v) {
  if(j.get<std::string>() == "Invalid") {
    v = LolMatchmakingMatchmakingDodgeState::Invalid_e;
    return;
  } 
  if(j.get<std::string>() == "PartyDodged") {
    v = LolMatchmakingMatchmakingDodgeState::PartyDodged_e;
    return;
  } 
  if(j.get<std::string>() == "StrangerDodged") {
    v = LolMatchmakingMatchmakingDodgeState::StrangerDodged_e;
    return;
  } 
  if(j.get<std::string>() == "TournamentDodged") {
    v = LolMatchmakingMatchmakingDodgeState::TournamentDodged_e;
    return;
  } 
  }
}