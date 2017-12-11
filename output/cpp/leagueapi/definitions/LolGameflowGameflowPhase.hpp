#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameflowGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolGameflowGameflowPhase& v) {
    switch(v) { 
    case LolGameflowGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolGameflowGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolGameflowGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolGameflowGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolGameflowGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolGameflowGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolGameflowGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolGameflowGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolGameflowGameflowPhase::None_e:
      j = "None";
    break;
    case LolGameflowGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolGameflowGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolGameflowGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolGameflowGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolGameflowGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolGameflowGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolGameflowGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolGameflowGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolGameflowGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolGameflowGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolGameflowGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolGameflowGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolGameflowGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolGameflowGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolGameflowGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolGameflowGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolGameflowGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolGameflowGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolGameflowGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolGameflowGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 