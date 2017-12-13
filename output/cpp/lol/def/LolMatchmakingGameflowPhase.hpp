#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolMatchmakingGameflowPhase {  
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
  void to_json(json& j, const LolMatchmakingGameflowPhase& v) {
  if(v == LolMatchmakingGameflowPhase::ChampSelect_e) {
    j = "ChampSelect";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::CheckedIntoTournament_e) {
    j = "CheckedIntoTournament";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::EndOfGame_e) {
    j = "EndOfGame";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::FailedToLaunch_e) {
    j = "FailedToLaunch";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::GameStart_e) {
    j = "GameStart";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::InProgress_e) {
    j = "InProgress";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::Lobby_e) {
    j = "Lobby";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::Matchmaking_e) {
    j = "Matchmaking";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::None_e) {
    j = "None";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::PreEndOfGame_e) {
    j = "PreEndOfGame";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::ReadyCheck_e) {
    j = "ReadyCheck";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::Reconnect_e) {
    j = "Reconnect";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::TerminatedInError_e) {
    j = "TerminatedInError";
    return;
  }
  if(v == LolMatchmakingGameflowPhase::WaitingForStats_e) {
    j = "WaitingForStats";
    return;
  }
  }
  void from_json(const json& j, LolMatchmakingGameflowPhase& v) {
  if(j.get<std::string>() == "ChampSelect") {
    v = LolMatchmakingGameflowPhase::ChampSelect_e;
    return;
  } 
  if(j.get<std::string>() == "CheckedIntoTournament") {
    v = LolMatchmakingGameflowPhase::CheckedIntoTournament_e;
    return;
  } 
  if(j.get<std::string>() == "EndOfGame") {
    v = LolMatchmakingGameflowPhase::EndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "FailedToLaunch") {
    v = LolMatchmakingGameflowPhase::FailedToLaunch_e;
    return;
  } 
  if(j.get<std::string>() == "GameStart") {
    v = LolMatchmakingGameflowPhase::GameStart_e;
    return;
  } 
  if(j.get<std::string>() == "InProgress") {
    v = LolMatchmakingGameflowPhase::InProgress_e;
    return;
  } 
  if(j.get<std::string>() == "Lobby") {
    v = LolMatchmakingGameflowPhase::Lobby_e;
    return;
  } 
  if(j.get<std::string>() == "Matchmaking") {
    v = LolMatchmakingGameflowPhase::Matchmaking_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolMatchmakingGameflowPhase::None_e;
    return;
  } 
  if(j.get<std::string>() == "PreEndOfGame") {
    v = LolMatchmakingGameflowPhase::PreEndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "ReadyCheck") {
    v = LolMatchmakingGameflowPhase::ReadyCheck_e;
    return;
  } 
  if(j.get<std::string>() == "Reconnect") {
    v = LolMatchmakingGameflowPhase::Reconnect_e;
    return;
  } 
  if(j.get<std::string>() == "TerminatedInError") {
    v = LolMatchmakingGameflowPhase::TerminatedInError_e;
    return;
  } 
  if(j.get<std::string>() == "WaitingForStats") {
    v = LolMatchmakingGameflowPhase::WaitingForStats_e;
    return;
  } 
  }
}