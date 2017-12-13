#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPlayerBehaviorGameflowPhase {  
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
  void to_json(json& j, const LolPlayerBehaviorGameflowPhase& v) {
    if(v == LolPlayerBehaviorGameflowPhase::ChampSelect_e) {
      j = "ChampSelect";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::CheckedIntoTournament_e) {
      j = "CheckedIntoTournament";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::EndOfGame_e) {
      j = "EndOfGame";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::FailedToLaunch_e) {
      j = "FailedToLaunch";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::GameStart_e) {
      j = "GameStart";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::Lobby_e) {
      j = "Lobby";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::Matchmaking_e) {
      j = "Matchmaking";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::PreEndOfGame_e) {
      j = "PreEndOfGame";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::ReadyCheck_e) {
      j = "ReadyCheck";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::Reconnect_e) {
      j = "Reconnect";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::TerminatedInError_e) {
      j = "TerminatedInError";
      return;
    }
    if(v == LolPlayerBehaviorGameflowPhase::WaitingForStats_e) {
      j = "WaitingForStats";
      return;
    }
  }
  void from_json(const json& j, LolPlayerBehaviorGameflowPhase& v) {
    if(j.get<std::string>() == "ChampSelect") {
      v = LolPlayerBehaviorGameflowPhase::ChampSelect_e;
      return;
    } 
    if(j.get<std::string>() == "CheckedIntoTournament") {
      v = LolPlayerBehaviorGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(j.get<std::string>() == "EndOfGame") {
      v = LolPlayerBehaviorGameflowPhase::EndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToLaunch") {
      v = LolPlayerBehaviorGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "GameStart") {
      v = LolPlayerBehaviorGameflowPhase::GameStart_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolPlayerBehaviorGameflowPhase::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Lobby") {
      v = LolPlayerBehaviorGameflowPhase::Lobby_e;
      return;
    } 
    if(j.get<std::string>() == "Matchmaking") {
      v = LolPlayerBehaviorGameflowPhase::Matchmaking_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolPlayerBehaviorGameflowPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "PreEndOfGame") {
      v = LolPlayerBehaviorGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "ReadyCheck") {
      v = LolPlayerBehaviorGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(j.get<std::string>() == "Reconnect") {
      v = LolPlayerBehaviorGameflowPhase::Reconnect_e;
      return;
    } 
    if(j.get<std::string>() == "TerminatedInError") {
      v = LolPlayerBehaviorGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(j.get<std::string>() == "WaitingForStats") {
      v = LolPlayerBehaviorGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
}