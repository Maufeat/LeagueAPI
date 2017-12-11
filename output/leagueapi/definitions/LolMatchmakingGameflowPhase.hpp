#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchmakingGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolMatchmakingGameflowPhase& v) {
    switch(v) { 
    case LolMatchmakingGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolMatchmakingGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolMatchmakingGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolMatchmakingGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolMatchmakingGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolMatchmakingGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolMatchmakingGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolMatchmakingGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolMatchmakingGameflowPhase::None_e:
      j = "None";
    break;
    case LolMatchmakingGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolMatchmakingGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolMatchmakingGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolMatchmakingGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolMatchmakingGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolMatchmakingGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolMatchmakingGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolMatchmakingGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolMatchmakingGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolMatchmakingGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolMatchmakingGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolMatchmakingGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolMatchmakingGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolMatchmakingGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolMatchmakingGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolMatchmakingGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolMatchmakingGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolMatchmakingGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolMatchmakingGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolMatchmakingGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 