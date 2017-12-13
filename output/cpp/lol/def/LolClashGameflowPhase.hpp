#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashGameflowPhase {  
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
  void to_json(json& j, const LolClashGameflowPhase& v) {
  if(v == LolClashGameflowPhase::ChampSelect_e) {
    j = "ChampSelect";
    return;
  }
  if(v == LolClashGameflowPhase::CheckedIntoTournament_e) {
    j = "CheckedIntoTournament";
    return;
  }
  if(v == LolClashGameflowPhase::EndOfGame_e) {
    j = "EndOfGame";
    return;
  }
  if(v == LolClashGameflowPhase::FailedToLaunch_e) {
    j = "FailedToLaunch";
    return;
  }
  if(v == LolClashGameflowPhase::GameStart_e) {
    j = "GameStart";
    return;
  }
  if(v == LolClashGameflowPhase::InProgress_e) {
    j = "InProgress";
    return;
  }
  if(v == LolClashGameflowPhase::Lobby_e) {
    j = "Lobby";
    return;
  }
  if(v == LolClashGameflowPhase::Matchmaking_e) {
    j = "Matchmaking";
    return;
  }
  if(v == LolClashGameflowPhase::None_e) {
    j = "None";
    return;
  }
  if(v == LolClashGameflowPhase::PreEndOfGame_e) {
    j = "PreEndOfGame";
    return;
  }
  if(v == LolClashGameflowPhase::ReadyCheck_e) {
    j = "ReadyCheck";
    return;
  }
  if(v == LolClashGameflowPhase::Reconnect_e) {
    j = "Reconnect";
    return;
  }
  if(v == LolClashGameflowPhase::TerminatedInError_e) {
    j = "TerminatedInError";
    return;
  }
  if(v == LolClashGameflowPhase::WaitingForStats_e) {
    j = "WaitingForStats";
    return;
  }
  }
  void from_json(const json& j, LolClashGameflowPhase& v) {
  if(j.get<std::string>() == "ChampSelect") {
    v = LolClashGameflowPhase::ChampSelect_e;
    return;
  } 
  if(j.get<std::string>() == "CheckedIntoTournament") {
    v = LolClashGameflowPhase::CheckedIntoTournament_e;
    return;
  } 
  if(j.get<std::string>() == "EndOfGame") {
    v = LolClashGameflowPhase::EndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "FailedToLaunch") {
    v = LolClashGameflowPhase::FailedToLaunch_e;
    return;
  } 
  if(j.get<std::string>() == "GameStart") {
    v = LolClashGameflowPhase::GameStart_e;
    return;
  } 
  if(j.get<std::string>() == "InProgress") {
    v = LolClashGameflowPhase::InProgress_e;
    return;
  } 
  if(j.get<std::string>() == "Lobby") {
    v = LolClashGameflowPhase::Lobby_e;
    return;
  } 
  if(j.get<std::string>() == "Matchmaking") {
    v = LolClashGameflowPhase::Matchmaking_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolClashGameflowPhase::None_e;
    return;
  } 
  if(j.get<std::string>() == "PreEndOfGame") {
    v = LolClashGameflowPhase::PreEndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "ReadyCheck") {
    v = LolClashGameflowPhase::ReadyCheck_e;
    return;
  } 
  if(j.get<std::string>() == "Reconnect") {
    v = LolClashGameflowPhase::Reconnect_e;
    return;
  } 
  if(j.get<std::string>() == "TerminatedInError") {
    v = LolClashGameflowPhase::TerminatedInError_e;
    return;
  } 
  if(j.get<std::string>() == "WaitingForStats") {
    v = LolClashGameflowPhase::WaitingForStats_e;
    return;
  } 
  }
}