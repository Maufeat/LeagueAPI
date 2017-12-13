#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPerksGameflowPhase {  
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
  void to_json(json& j, const LolPerksGameflowPhase& v) {
  if(v == LolPerksGameflowPhase::ChampSelect_e) {
    j = "ChampSelect";
    return;
  }
  if(v == LolPerksGameflowPhase::CheckedIntoTournament_e) {
    j = "CheckedIntoTournament";
    return;
  }
  if(v == LolPerksGameflowPhase::EndOfGame_e) {
    j = "EndOfGame";
    return;
  }
  if(v == LolPerksGameflowPhase::FailedToLaunch_e) {
    j = "FailedToLaunch";
    return;
  }
  if(v == LolPerksGameflowPhase::GameStart_e) {
    j = "GameStart";
    return;
  }
  if(v == LolPerksGameflowPhase::InProgress_e) {
    j = "InProgress";
    return;
  }
  if(v == LolPerksGameflowPhase::Lobby_e) {
    j = "Lobby";
    return;
  }
  if(v == LolPerksGameflowPhase::Matchmaking_e) {
    j = "Matchmaking";
    return;
  }
  if(v == LolPerksGameflowPhase::None_e) {
    j = "None";
    return;
  }
  if(v == LolPerksGameflowPhase::PreEndOfGame_e) {
    j = "PreEndOfGame";
    return;
  }
  if(v == LolPerksGameflowPhase::ReadyCheck_e) {
    j = "ReadyCheck";
    return;
  }
  if(v == LolPerksGameflowPhase::Reconnect_e) {
    j = "Reconnect";
    return;
  }
  if(v == LolPerksGameflowPhase::TerminatedInError_e) {
    j = "TerminatedInError";
    return;
  }
  if(v == LolPerksGameflowPhase::WaitingForStats_e) {
    j = "WaitingForStats";
    return;
  }
  }
  void from_json(const json& j, LolPerksGameflowPhase& v) {
  if(j.get<std::string>() == "ChampSelect") {
    v = LolPerksGameflowPhase::ChampSelect_e;
    return;
  } 
  if(j.get<std::string>() == "CheckedIntoTournament") {
    v = LolPerksGameflowPhase::CheckedIntoTournament_e;
    return;
  } 
  if(j.get<std::string>() == "EndOfGame") {
    v = LolPerksGameflowPhase::EndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "FailedToLaunch") {
    v = LolPerksGameflowPhase::FailedToLaunch_e;
    return;
  } 
  if(j.get<std::string>() == "GameStart") {
    v = LolPerksGameflowPhase::GameStart_e;
    return;
  } 
  if(j.get<std::string>() == "InProgress") {
    v = LolPerksGameflowPhase::InProgress_e;
    return;
  } 
  if(j.get<std::string>() == "Lobby") {
    v = LolPerksGameflowPhase::Lobby_e;
    return;
  } 
  if(j.get<std::string>() == "Matchmaking") {
    v = LolPerksGameflowPhase::Matchmaking_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolPerksGameflowPhase::None_e;
    return;
  } 
  if(j.get<std::string>() == "PreEndOfGame") {
    v = LolPerksGameflowPhase::PreEndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "ReadyCheck") {
    v = LolPerksGameflowPhase::ReadyCheck_e;
    return;
  } 
  if(j.get<std::string>() == "Reconnect") {
    v = LolPerksGameflowPhase::Reconnect_e;
    return;
  } 
  if(j.get<std::string>() == "TerminatedInError") {
    v = LolPerksGameflowPhase::TerminatedInError_e;
    return;
  } 
  if(j.get<std::string>() == "WaitingForStats") {
    v = LolPerksGameflowPhase::WaitingForStats_e;
    return;
  } 
  }
}