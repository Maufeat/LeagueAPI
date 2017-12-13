#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChampSelectLegacyGameflowPhase {  
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
  void to_json(json& j, const LolChampSelectLegacyGameflowPhase& v) {
  if(v == LolChampSelectLegacyGameflowPhase::ChampSelect_e) {
    j = "ChampSelect";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::CheckedIntoTournament_e) {
    j = "CheckedIntoTournament";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::EndOfGame_e) {
    j = "EndOfGame";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::FailedToLaunch_e) {
    j = "FailedToLaunch";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::GameStart_e) {
    j = "GameStart";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::InProgress_e) {
    j = "InProgress";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::Lobby_e) {
    j = "Lobby";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::Matchmaking_e) {
    j = "Matchmaking";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::None_e) {
    j = "None";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::PreEndOfGame_e) {
    j = "PreEndOfGame";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::ReadyCheck_e) {
    j = "ReadyCheck";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::Reconnect_e) {
    j = "Reconnect";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::TerminatedInError_e) {
    j = "TerminatedInError";
    return;
  }
  if(v == LolChampSelectLegacyGameflowPhase::WaitingForStats_e) {
    j = "WaitingForStats";
    return;
  }
  }
  void from_json(const json& j, LolChampSelectLegacyGameflowPhase& v) {
  if(j.get<std::string>() == "ChampSelect") {
    v = LolChampSelectLegacyGameflowPhase::ChampSelect_e;
    return;
  } 
  if(j.get<std::string>() == "CheckedIntoTournament") {
    v = LolChampSelectLegacyGameflowPhase::CheckedIntoTournament_e;
    return;
  } 
  if(j.get<std::string>() == "EndOfGame") {
    v = LolChampSelectLegacyGameflowPhase::EndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "FailedToLaunch") {
    v = LolChampSelectLegacyGameflowPhase::FailedToLaunch_e;
    return;
  } 
  if(j.get<std::string>() == "GameStart") {
    v = LolChampSelectLegacyGameflowPhase::GameStart_e;
    return;
  } 
  if(j.get<std::string>() == "InProgress") {
    v = LolChampSelectLegacyGameflowPhase::InProgress_e;
    return;
  } 
  if(j.get<std::string>() == "Lobby") {
    v = LolChampSelectLegacyGameflowPhase::Lobby_e;
    return;
  } 
  if(j.get<std::string>() == "Matchmaking") {
    v = LolChampSelectLegacyGameflowPhase::Matchmaking_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolChampSelectLegacyGameflowPhase::None_e;
    return;
  } 
  if(j.get<std::string>() == "PreEndOfGame") {
    v = LolChampSelectLegacyGameflowPhase::PreEndOfGame_e;
    return;
  } 
  if(j.get<std::string>() == "ReadyCheck") {
    v = LolChampSelectLegacyGameflowPhase::ReadyCheck_e;
    return;
  } 
  if(j.get<std::string>() == "Reconnect") {
    v = LolChampSelectLegacyGameflowPhase::Reconnect_e;
    return;
  } 
  if(j.get<std::string>() == "TerminatedInError") {
    v = LolChampSelectLegacyGameflowPhase::TerminatedInError_e;
    return;
  } 
  if(j.get<std::string>() == "WaitingForStats") {
    v = LolChampSelectLegacyGameflowPhase::WaitingForStats_e;
    return;
  } 
  }
}