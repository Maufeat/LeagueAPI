#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyTeamBuilderMatchmakingDodgeState {  
    Invalid_e = 48,
    PartyDodged_e = 49,
    StrangerDodged_e = 50,
    TournamentDodged_e = 51,
  };
  void to_json(json& j, const LolLobbyTeamBuilderMatchmakingDodgeState& v) {
  if(v == LolLobbyTeamBuilderMatchmakingDodgeState::Invalid_e) {
    j = "Invalid";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingDodgeState::PartyDodged_e) {
    j = "PartyDodged";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingDodgeState::StrangerDodged_e) {
    j = "StrangerDodged";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingDodgeState::TournamentDodged_e) {
    j = "TournamentDodged";
    return;
  }
  }
  void from_json(const json& j, LolLobbyTeamBuilderMatchmakingDodgeState& v) {
  if(j.get<std::string>() == "Invalid") {
    v = LolLobbyTeamBuilderMatchmakingDodgeState::Invalid_e;
    return;
  } 
  if(j.get<std::string>() == "PartyDodged") {
    v = LolLobbyTeamBuilderMatchmakingDodgeState::PartyDodged_e;
    return;
  } 
  if(j.get<std::string>() == "StrangerDodged") {
    v = LolLobbyTeamBuilderMatchmakingDodgeState::StrangerDodged_e;
    return;
  } 
  if(j.get<std::string>() == "TournamentDodged") {
    v = LolLobbyTeamBuilderMatchmakingDodgeState::TournamentDodged_e;
    return;
  } 
  }
}