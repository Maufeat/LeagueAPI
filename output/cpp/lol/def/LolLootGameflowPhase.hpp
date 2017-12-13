#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLootGameflowPhase {  
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
  void to_json(json& j, const LolLootGameflowPhase& v) {
  if(v == LolLootGameflowPhase::ChampSelect_e) {
    j = "ChampSelect";
    return;
  }
  if(v == LolLootGameflowPhase::CheckedIntoTournament_e) {
    j = "CheckedIntoTournament";
    return;
  }
  if(v == LolLootGameflowPhase::EndOfGame_e) {
    j = "EndOfGame";
    return;
  }
  if(v == LolLootGameflowPhase::FailedToLaunch_e) {
    j = "FailedToLaunch";
    return;
  }
  if(v == LolLootGameflowPhase::GameStart_e) {
    j = "GameStart";
    return;
  }
  if(v == LolLootGameflowPhase::InProgress_e) {
    j = "InProgress";
    return;
  }
  if(v == LolLootGameflowPhase::Lobby_e) {
    j = "Lobby";
    return;
  }
  if(v == LolLootGameflowPhase::Matchmaking_e) {
    j = "Matchmaking";
    return;
  }
  if(v == LolLootGameflowPhase::None_e) {
    j = "None";
    return;
  }
  if(v == LolLootGameflowPhase::PreEndOfGame_e) {
    j = "PreEndOfGame";
    return;
  }
  if(v == LolLootGameflowPhase::ReadyCheck_e) {
    j = "ReadyCheck";
    return;
  }
  if(v == LolLootGameflowPhase::Reconnect_e) {
    j = "Reconnect";
    return;
  }
  if(v == LolLootGameflowPhase::TerminatedInError_e) {
    j = "TerminatedInError";
    return;
  }
  if(v == LolLootGameflowPhase::WaitingForStats_e) {
    j = "WaitingForStats";
    return;
  }
  }
  void from_json(const json& j, LolLootGameflowPhase& v) {
  if(j.get<std::string>() == "ChampSelect") {
    v = LolLootGameflowPhase::ChampSelect_e;
    return;
  } 
  if(j.get<std::string>() == "CheckedIntoTournament") {
    v = LolLootGameflowPhase::CheckedIntoTournament_e;
    return;
  } 
  if(j.get<std::string>() == "EndOfGame") {
    v = LolLootGameflowPhase::EndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "FailedToLaunch") {
    v = LolLootGameflowPhase::FailedToLaunch_e;
    return;
  } 
  if(j.get<std::string>() == "GameStart") {
    v = LolLootGameflowPhase::GameStart_e;
    return;
  } 
  if(j.get<std::string>() == "InProgress") {
    v = LolLootGameflowPhase::InProgress_e;
    return;
  } 
  if(j.get<std::string>() == "Lobby") {
    v = LolLootGameflowPhase::Lobby_e;
    return;
  } 
  if(j.get<std::string>() == "Matchmaking") {
    v = LolLootGameflowPhase::Matchmaking_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolLootGameflowPhase::None_e;
    return;
  } 
  if(j.get<std::string>() == "PreEndOfGame") {
    v = LolLootGameflowPhase::PreEndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "ReadyCheck") {
    v = LolLootGameflowPhase::ReadyCheck_e;
    return;
  } 
  if(j.get<std::string>() == "Reconnect") {
    v = LolLootGameflowPhase::Reconnect_e;
    return;
  } 
  if(j.get<std::string>() == "TerminatedInError") {
    v = LolLootGameflowPhase::TerminatedInError_e;
    return;
  } 
  if(j.get<std::string>() == "WaitingForStats") {
    v = LolLootGameflowPhase::WaitingForStats_e;
    return;
  } 
  }
}