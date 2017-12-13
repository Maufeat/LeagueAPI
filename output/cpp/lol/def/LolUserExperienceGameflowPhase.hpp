#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolUserExperienceGameflowPhase {  
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
  void to_json(json& j, const LolUserExperienceGameflowPhase& v) {
    if(v == LolUserExperienceGameflowPhase::ChampSelect_e) {
      j = "ChampSelect";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::CheckedIntoTournament_e) {
      j = "CheckedIntoTournament";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::EndOfGame_e) {
      j = "EndOfGame";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::FailedToLaunch_e) {
      j = "FailedToLaunch";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::GameStart_e) {
      j = "GameStart";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::Lobby_e) {
      j = "Lobby";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::Matchmaking_e) {
      j = "Matchmaking";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::PreEndOfGame_e) {
      j = "PreEndOfGame";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::ReadyCheck_e) {
      j = "ReadyCheck";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::Reconnect_e) {
      j = "Reconnect";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::TerminatedInError_e) {
      j = "TerminatedInError";
      return;
    }
    if(v == LolUserExperienceGameflowPhase::WaitingForStats_e) {
      j = "WaitingForStats";
      return;
    }
  }
  void from_json(const json& j, LolUserExperienceGameflowPhase& v) {
    if(j.get<std::string>() == "ChampSelect") {
      v = LolUserExperienceGameflowPhase::ChampSelect_e;
      return;
    } 
    if(j.get<std::string>() == "CheckedIntoTournament") {
      v = LolUserExperienceGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(j.get<std::string>() == "EndOfGame") {
      v = LolUserExperienceGameflowPhase::EndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToLaunch") {
      v = LolUserExperienceGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "GameStart") {
      v = LolUserExperienceGameflowPhase::GameStart_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolUserExperienceGameflowPhase::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Lobby") {
      v = LolUserExperienceGameflowPhase::Lobby_e;
      return;
    } 
    if(j.get<std::string>() == "Matchmaking") {
      v = LolUserExperienceGameflowPhase::Matchmaking_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolUserExperienceGameflowPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "PreEndOfGame") {
      v = LolUserExperienceGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "ReadyCheck") {
      v = LolUserExperienceGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(j.get<std::string>() == "Reconnect") {
      v = LolUserExperienceGameflowPhase::Reconnect_e;
      return;
    } 
    if(j.get<std::string>() == "TerminatedInError") {
      v = LolUserExperienceGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(j.get<std::string>() == "WaitingForStats") {
      v = LolUserExperienceGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
}