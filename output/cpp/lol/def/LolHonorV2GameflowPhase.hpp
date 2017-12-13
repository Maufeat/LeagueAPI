#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolHonorV2GameflowPhase {  
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
  void to_json(json& j, const LolHonorV2GameflowPhase& v) {
    if(v == LolHonorV2GameflowPhase::ChampSelect_e) {
      j = "ChampSelect";
      return;
    }
    if(v == LolHonorV2GameflowPhase::CheckedIntoTournament_e) {
      j = "CheckedIntoTournament";
      return;
    }
    if(v == LolHonorV2GameflowPhase::EndOfGame_e) {
      j = "EndOfGame";
      return;
    }
    if(v == LolHonorV2GameflowPhase::FailedToLaunch_e) {
      j = "FailedToLaunch";
      return;
    }
    if(v == LolHonorV2GameflowPhase::GameStart_e) {
      j = "GameStart";
      return;
    }
    if(v == LolHonorV2GameflowPhase::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolHonorV2GameflowPhase::Lobby_e) {
      j = "Lobby";
      return;
    }
    if(v == LolHonorV2GameflowPhase::Matchmaking_e) {
      j = "Matchmaking";
      return;
    }
    if(v == LolHonorV2GameflowPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolHonorV2GameflowPhase::PreEndOfGame_e) {
      j = "PreEndOfGame";
      return;
    }
    if(v == LolHonorV2GameflowPhase::ReadyCheck_e) {
      j = "ReadyCheck";
      return;
    }
    if(v == LolHonorV2GameflowPhase::Reconnect_e) {
      j = "Reconnect";
      return;
    }
    if(v == LolHonorV2GameflowPhase::TerminatedInError_e) {
      j = "TerminatedInError";
      return;
    }
    if(v == LolHonorV2GameflowPhase::WaitingForStats_e) {
      j = "WaitingForStats";
      return;
    }
  }
  void from_json(const json& j, LolHonorV2GameflowPhase& v) {
    if(j.get<std::string>() == "ChampSelect") {
      v = LolHonorV2GameflowPhase::ChampSelect_e;
      return;
    } 
    if(j.get<std::string>() == "CheckedIntoTournament") {
      v = LolHonorV2GameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(j.get<std::string>() == "EndOfGame") {
      v = LolHonorV2GameflowPhase::EndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToLaunch") {
      v = LolHonorV2GameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "GameStart") {
      v = LolHonorV2GameflowPhase::GameStart_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolHonorV2GameflowPhase::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Lobby") {
      v = LolHonorV2GameflowPhase::Lobby_e;
      return;
    } 
    if(j.get<std::string>() == "Matchmaking") {
      v = LolHonorV2GameflowPhase::Matchmaking_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolHonorV2GameflowPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "PreEndOfGame") {
      v = LolHonorV2GameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "ReadyCheck") {
      v = LolHonorV2GameflowPhase::ReadyCheck_e;
      return;
    } 
    if(j.get<std::string>() == "Reconnect") {
      v = LolHonorV2GameflowPhase::Reconnect_e;
      return;
    } 
    if(j.get<std::string>() == "TerminatedInError") {
      v = LolHonorV2GameflowPhase::TerminatedInError_e;
      return;
    } 
    if(j.get<std::string>() == "WaitingForStats") {
      v = LolHonorV2GameflowPhase::WaitingForStats_e;
      return;
    } 
  }
}