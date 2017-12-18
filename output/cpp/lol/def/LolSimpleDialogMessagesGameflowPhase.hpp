#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolSimpleDialogMessagesGameflowPhase {  
    ChampSelect_e = 5,
    CheckedIntoTournament_e = 3,
    EndOfGame_e = 12,
    FailedToLaunch_e = 7,
    GameStart_e = 6,
    InProgress_e = 8,
    Lobby_e = 1,
    Matchmaking_e = 2,
    None_e = 0,
    PreEndOfGame_e = 11,
    ReadyCheck_e = 4,
    Reconnect_e = 9,
    TerminatedInError_e = 13,
    WaitingForStats_e = 10,
  };
  inline void to_json(json& j, const LolSimpleDialogMessagesGameflowPhase& v) {
    if(v == LolSimpleDialogMessagesGameflowPhase::ChampSelect_e) {
      j = "ChampSelect";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::CheckedIntoTournament_e) {
      j = "CheckedIntoTournament";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::EndOfGame_e) {
      j = "EndOfGame";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::FailedToLaunch_e) {
      j = "FailedToLaunch";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::GameStart_e) {
      j = "GameStart";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::Lobby_e) {
      j = "Lobby";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::Matchmaking_e) {
      j = "Matchmaking";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::PreEndOfGame_e) {
      j = "PreEndOfGame";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::ReadyCheck_e) {
      j = "ReadyCheck";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::Reconnect_e) {
      j = "Reconnect";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::TerminatedInError_e) {
      j = "TerminatedInError";
      return;
    }
    if(v == LolSimpleDialogMessagesGameflowPhase::WaitingForStats_e) {
      j = "WaitingForStats";
      return;
    }
  }
  inline void from_json(const json& j, LolSimpleDialogMessagesGameflowPhase& v) {
    if(j.get<std::string>() == "ChampSelect") {
      v = LolSimpleDialogMessagesGameflowPhase::ChampSelect_e;
      return;
    } 
    if(j.get<std::string>() == "CheckedIntoTournament") {
      v = LolSimpleDialogMessagesGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(j.get<std::string>() == "EndOfGame") {
      v = LolSimpleDialogMessagesGameflowPhase::EndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToLaunch") {
      v = LolSimpleDialogMessagesGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "GameStart") {
      v = LolSimpleDialogMessagesGameflowPhase::GameStart_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolSimpleDialogMessagesGameflowPhase::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Lobby") {
      v = LolSimpleDialogMessagesGameflowPhase::Lobby_e;
      return;
    } 
    if(j.get<std::string>() == "Matchmaking") {
      v = LolSimpleDialogMessagesGameflowPhase::Matchmaking_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolSimpleDialogMessagesGameflowPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "PreEndOfGame") {
      v = LolSimpleDialogMessagesGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "ReadyCheck") {
      v = LolSimpleDialogMessagesGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(j.get<std::string>() == "Reconnect") {
      v = LolSimpleDialogMessagesGameflowPhase::Reconnect_e;
      return;
    } 
    if(j.get<std::string>() == "TerminatedInError") {
      v = LolSimpleDialogMessagesGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(j.get<std::string>() == "WaitingForStats") {
      v = LolSimpleDialogMessagesGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
}