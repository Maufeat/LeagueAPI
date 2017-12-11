#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingReadyCheckState { /**/ 
    Error_e = 5, /**/ 
    EveryoneReady_e = 2, /**/ 
    InProgress_e = 1, /**/ 
    Invalid_e = 0, /**/ 
    PartyNotReady_e = 4, /**/ 
    StrangerNotReady_e = 3, /**/ 
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckState& v) {
    switch(v) { 
    case LolLobbyTeamBuilderMatchmakingReadyCheckState::Error_e:
      j = "Error";
    break;
    case LolLobbyTeamBuilderMatchmakingReadyCheckState::EveryoneReady_e:
      j = "EveryoneReady";
    break;
    case LolLobbyTeamBuilderMatchmakingReadyCheckState::InProgress_e:
      j = "InProgress";
    break;
    case LolLobbyTeamBuilderMatchmakingReadyCheckState::Invalid_e:
      j = "Invalid";
    break;
    case LolLobbyTeamBuilderMatchmakingReadyCheckState::PartyNotReady_e:
      j = "PartyNotReady";
    break;
    case LolLobbyTeamBuilderMatchmakingReadyCheckState::StrangerNotReady_e:
      j = "StrangerNotReady";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Error") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::Error_e;
      return;
    } 
    if(s == "EveryoneReady") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::EveryoneReady_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::InProgress_e;
      return;
    } 
    if(s == "Invalid") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::Invalid_e;
      return;
    } 
    if(s == "PartyNotReady") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::PartyNotReady_e;
      return;
    } 
    if(s == "StrangerNotReady") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::StrangerNotReady_e;
      return;
    } 
  }
} 