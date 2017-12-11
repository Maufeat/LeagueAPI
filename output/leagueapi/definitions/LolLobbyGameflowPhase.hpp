#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyGameflowPhase { /**/ 
    ChampSelect_e = 5, /**/ 
    CheckedIntoTournament_e = 3, /**/ 
    EndOfGame_e = 12, /**/ 
    FailedToLaunch_e = 7, /**/ 
    GameStart_e = 6, /**/ 
    InProgress_e = 8, /**/ 
    Lobby_e = 1, /**/ 
    Matchmaking_e = 2, /**/ 
    None_e = 0, /**/ 
    PreEndOfGame_e = 11, /**/ 
    ReadyCheck_e = 4, /**/ 
    Reconnect_e = 9, /**/ 
    TerminatedInError_e = 13, /**/ 
    WaitingForStats_e = 10, /**/ 
  };
  static void to_json(json& j, const LolLobbyGameflowPhase& v) {
    switch(v) { 
    case LolLobbyGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolLobbyGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolLobbyGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolLobbyGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolLobbyGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolLobbyGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolLobbyGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolLobbyGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolLobbyGameflowPhase::None_e:
      j = "None";
    break;
    case LolLobbyGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolLobbyGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolLobbyGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolLobbyGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolLobbyGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolLobbyGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolLobbyGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolLobbyGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolLobbyGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolLobbyGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolLobbyGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolLobbyGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolLobbyGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolLobbyGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolLobbyGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolLobbyGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolLobbyGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolLobbyGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolLobbyGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 