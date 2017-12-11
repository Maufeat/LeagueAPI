#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolSimpleDialogMessagesGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolSimpleDialogMessagesGameflowPhase& v) {
    switch(v) { 
    case LolSimpleDialogMessagesGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolSimpleDialogMessagesGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolSimpleDialogMessagesGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolSimpleDialogMessagesGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolSimpleDialogMessagesGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolSimpleDialogMessagesGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolSimpleDialogMessagesGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolSimpleDialogMessagesGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolSimpleDialogMessagesGameflowPhase::None_e:
      j = "None";
    break;
    case LolSimpleDialogMessagesGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolSimpleDialogMessagesGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolSimpleDialogMessagesGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolSimpleDialogMessagesGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolSimpleDialogMessagesGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolSimpleDialogMessagesGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolSimpleDialogMessagesGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolSimpleDialogMessagesGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolSimpleDialogMessagesGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolSimpleDialogMessagesGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolSimpleDialogMessagesGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolSimpleDialogMessagesGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolSimpleDialogMessagesGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolSimpleDialogMessagesGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolSimpleDialogMessagesGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolSimpleDialogMessagesGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolSimpleDialogMessagesGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolSimpleDialogMessagesGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolSimpleDialogMessagesGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolSimpleDialogMessagesGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 