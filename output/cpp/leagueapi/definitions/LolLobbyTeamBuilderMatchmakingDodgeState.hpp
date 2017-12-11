#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingDodgeState { /**/ 
    Invalid_e = 48, /**/ 
    PartyDodged_e = 49, /**/ 
    StrangerDodged_e = 50, /**/ 
    TournamentDodged_e = 51, /**/ 
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingDodgeState& v) {
    switch(v) { 
    case LolLobbyTeamBuilderMatchmakingDodgeState::Invalid_e:
      j = "Invalid";
    break;
    case LolLobbyTeamBuilderMatchmakingDodgeState::PartyDodged_e:
      j = "PartyDodged";
    break;
    case LolLobbyTeamBuilderMatchmakingDodgeState::StrangerDodged_e:
      j = "StrangerDodged";
    break;
    case LolLobbyTeamBuilderMatchmakingDodgeState::TournamentDodged_e:
      j = "TournamentDodged";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingDodgeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = LolLobbyTeamBuilderMatchmakingDodgeState::Invalid_e;
      return;
    } 
    if(s == "PartyDodged") {
      v = LolLobbyTeamBuilderMatchmakingDodgeState::PartyDodged_e;
      return;
    } 
    if(s == "StrangerDodged") {
      v = LolLobbyTeamBuilderMatchmakingDodgeState::StrangerDodged_e;
      return;
    } 
    if(s == "TournamentDodged") {
      v = LolLobbyTeamBuilderMatchmakingDodgeState::TournamentDodged_e;
      return;
    } 
  }
} 