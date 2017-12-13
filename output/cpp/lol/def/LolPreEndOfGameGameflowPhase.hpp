#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPreEndOfGameGameflowPhase {  
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
  void to_json(json& j, const LolPreEndOfGameGameflowPhase& v) {
    if(v == LolPreEndOfGameGameflowPhase::ChampSelect_e) {
      j = "ChampSelect";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::CheckedIntoTournament_e) {
      j = "CheckedIntoTournament";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::EndOfGame_e) {
      j = "EndOfGame";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::FailedToLaunch_e) {
      j = "FailedToLaunch";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::GameStart_e) {
      j = "GameStart";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::Lobby_e) {
      j = "Lobby";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::Matchmaking_e) {
      j = "Matchmaking";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::PreEndOfGame_e) {
      j = "PreEndOfGame";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::ReadyCheck_e) {
      j = "ReadyCheck";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::Reconnect_e) {
      j = "Reconnect";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::TerminatedInError_e) {
      j = "TerminatedInError";
      return;
    }
    if(v == LolPreEndOfGameGameflowPhase::WaitingForStats_e) {
      j = "WaitingForStats";
      return;
    }
  }
  void from_json(const json& j, LolPreEndOfGameGameflowPhase& v) {
    if(j.get<std::string>() == "ChampSelect") {
      v = LolPreEndOfGameGameflowPhase::ChampSelect_e;
      return;
    } 
    if(j.get<std::string>() == "CheckedIntoTournament") {
      v = LolPreEndOfGameGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(j.get<std::string>() == "EndOfGame") {
      v = LolPreEndOfGameGameflowPhase::EndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToLaunch") {
      v = LolPreEndOfGameGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "GameStart") {
      v = LolPreEndOfGameGameflowPhase::GameStart_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolPreEndOfGameGameflowPhase::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Lobby") {
      v = LolPreEndOfGameGameflowPhase::Lobby_e;
      return;
    } 
    if(j.get<std::string>() == "Matchmaking") {
      v = LolPreEndOfGameGameflowPhase::Matchmaking_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolPreEndOfGameGameflowPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "PreEndOfGame") {
      v = LolPreEndOfGameGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "ReadyCheck") {
      v = LolPreEndOfGameGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(j.get<std::string>() == "Reconnect") {
      v = LolPreEndOfGameGameflowPhase::Reconnect_e;
      return;
    } 
    if(j.get<std::string>() == "TerminatedInError") {
      v = LolPreEndOfGameGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(j.get<std::string>() == "WaitingForStats") {
      v = LolPreEndOfGameGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
}