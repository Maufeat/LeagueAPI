#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyTeamBuilderMatchmakingReadyCheckState {  
    Error_e = 5,
    EveryoneReady_e = 2,
    InProgress_e = 1,
    Invalid_e = 0,
    PartyNotReady_e = 4,
    StrangerNotReady_e = 3,
  };
  void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckState& v) {
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckState::Error_e) {
    j = "Error";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckState::EveryoneReady_e) {
    j = "EveryoneReady";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckState::InProgress_e) {
    j = "InProgress";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckState::Invalid_e) {
    j = "Invalid";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckState::PartyNotReady_e) {
    j = "PartyNotReady";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckState::StrangerNotReady_e) {
    j = "StrangerNotReady";
    return;
  }
  }
  void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckState& v) {
  if(j.get<std::string>() == "Error") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckState::Error_e;
    return;
  } 
  if(j.get<std::string>() == "EveryoneReady") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckState::EveryoneReady_e;
    return;
  } 
  if(j.get<std::string>() == "InProgress") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckState::InProgress_e;
    return;
  } 
  if(j.get<std::string>() == "Invalid") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckState::Invalid_e;
    return;
  } 
  if(j.get<std::string>() == "PartyNotReady") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckState::PartyNotReady_e;
    return;
  } 
  if(j.get<std::string>() == "StrangerNotReady") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckState::StrangerNotReady_e;
    return;
  } 
  }
}