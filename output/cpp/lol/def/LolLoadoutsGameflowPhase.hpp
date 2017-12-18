#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLoadoutsGameflowPhase {  
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
  inline void to_json(json& j, const LolLoadoutsGameflowPhase& v) {
    if(v == LolLoadoutsGameflowPhase::ChampSelect_e) {
      j = "ChampSelect";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::CheckedIntoTournament_e) {
      j = "CheckedIntoTournament";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::EndOfGame_e) {
      j = "EndOfGame";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::FailedToLaunch_e) {
      j = "FailedToLaunch";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::GameStart_e) {
      j = "GameStart";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::Lobby_e) {
      j = "Lobby";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::Matchmaking_e) {
      j = "Matchmaking";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::PreEndOfGame_e) {
      j = "PreEndOfGame";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::ReadyCheck_e) {
      j = "ReadyCheck";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::Reconnect_e) {
      j = "Reconnect";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::TerminatedInError_e) {
      j = "TerminatedInError";
      return;
    }
    if(v == LolLoadoutsGameflowPhase::WaitingForStats_e) {
      j = "WaitingForStats";
      return;
    }
  }
  inline void from_json(const json& j, LolLoadoutsGameflowPhase& v) {
    if(j.get<std::string>() == "ChampSelect") {
      v = LolLoadoutsGameflowPhase::ChampSelect_e;
      return;
    } 
    if(j.get<std::string>() == "CheckedIntoTournament") {
      v = LolLoadoutsGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(j.get<std::string>() == "EndOfGame") {
      v = LolLoadoutsGameflowPhase::EndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToLaunch") {
      v = LolLoadoutsGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "GameStart") {
      v = LolLoadoutsGameflowPhase::GameStart_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolLoadoutsGameflowPhase::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Lobby") {
      v = LolLoadoutsGameflowPhase::Lobby_e;
      return;
    } 
    if(j.get<std::string>() == "Matchmaking") {
      v = LolLoadoutsGameflowPhase::Matchmaking_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolLoadoutsGameflowPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "PreEndOfGame") {
      v = LolLoadoutsGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "ReadyCheck") {
      v = LolLoadoutsGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(j.get<std::string>() == "Reconnect") {
      v = LolLoadoutsGameflowPhase::Reconnect_e;
      return;
    } 
    if(j.get<std::string>() == "TerminatedInError") {
      v = LolLoadoutsGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(j.get<std::string>() == "WaitingForStats") {
      v = LolLoadoutsGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
}