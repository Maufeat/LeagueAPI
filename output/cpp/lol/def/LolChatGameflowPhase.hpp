#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChatGameflowPhase {  
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
  void to_json(json& j, const LolChatGameflowPhase& v) {
    if(v == LolChatGameflowPhase::ChampSelect_e) {
      j = "ChampSelect";
      return;
    }
    if(v == LolChatGameflowPhase::CheckedIntoTournament_e) {
      j = "CheckedIntoTournament";
      return;
    }
    if(v == LolChatGameflowPhase::EndOfGame_e) {
      j = "EndOfGame";
      return;
    }
    if(v == LolChatGameflowPhase::FailedToLaunch_e) {
      j = "FailedToLaunch";
      return;
    }
    if(v == LolChatGameflowPhase::GameStart_e) {
      j = "GameStart";
      return;
    }
    if(v == LolChatGameflowPhase::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolChatGameflowPhase::Lobby_e) {
      j = "Lobby";
      return;
    }
    if(v == LolChatGameflowPhase::Matchmaking_e) {
      j = "Matchmaking";
      return;
    }
    if(v == LolChatGameflowPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolChatGameflowPhase::PreEndOfGame_e) {
      j = "PreEndOfGame";
      return;
    }
    if(v == LolChatGameflowPhase::ReadyCheck_e) {
      j = "ReadyCheck";
      return;
    }
    if(v == LolChatGameflowPhase::Reconnect_e) {
      j = "Reconnect";
      return;
    }
    if(v == LolChatGameflowPhase::TerminatedInError_e) {
      j = "TerminatedInError";
      return;
    }
    if(v == LolChatGameflowPhase::WaitingForStats_e) {
      j = "WaitingForStats";
      return;
    }
  }
  void from_json(const json& j, LolChatGameflowPhase& v) {
    if(j.get<std::string>() == "ChampSelect") {
      v = LolChatGameflowPhase::ChampSelect_e;
      return;
    } 
    if(j.get<std::string>() == "CheckedIntoTournament") {
      v = LolChatGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(j.get<std::string>() == "EndOfGame") {
      v = LolChatGameflowPhase::EndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToLaunch") {
      v = LolChatGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "GameStart") {
      v = LolChatGameflowPhase::GameStart_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolChatGameflowPhase::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Lobby") {
      v = LolChatGameflowPhase::Lobby_e;
      return;
    } 
    if(j.get<std::string>() == "Matchmaking") {
      v = LolChatGameflowPhase::Matchmaking_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolChatGameflowPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "PreEndOfGame") {
      v = LolChatGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "ReadyCheck") {
      v = LolChatGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(j.get<std::string>() == "Reconnect") {
      v = LolChatGameflowPhase::Reconnect_e;
      return;
    } 
    if(j.get<std::string>() == "TerminatedInError") {
      v = LolChatGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(j.get<std::string>() == "WaitingForStats") {
      v = LolChatGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
}