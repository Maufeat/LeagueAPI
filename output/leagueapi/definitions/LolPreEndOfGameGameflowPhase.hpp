#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPreEndOfGameGameflowPhase { /**/ 
    ChampSelect_e = 5, /**/ 
    CheckedIntoTournament_e = 3, /**/ 
    EndOfGame_e = 12, /**/ 
    FailedToLaunch_e = 7, /**/ 
    GameStart_e = 6, /**/ 
    InProgress_e = 8, /**/ 
    Lobby_e = 1, /**/ 
    Matchmaking_e = 2, /**/ 
    None_e = 0, /**/ 
    PreEndOfGame_e = 11, /**/ 
    ReadyCheck_e = 4, /**/ 
    Reconnect_e = 9, /**/ 
    TerminatedInError_e = 13, /**/ 
    WaitingForStats_e = 10, /**/ 
  };
  static void to_json(json& j, const LolPreEndOfGameGameflowPhase& v) {
    switch(v) { 
    case LolPreEndOfGameGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolPreEndOfGameGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolPreEndOfGameGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolPreEndOfGameGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolPreEndOfGameGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolPreEndOfGameGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolPreEndOfGameGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolPreEndOfGameGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolPreEndOfGameGameflowPhase::None_e:
      j = "None";
    break;
    case LolPreEndOfGameGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolPreEndOfGameGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolPreEndOfGameGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolPreEndOfGameGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolPreEndOfGameGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolPreEndOfGameGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolPreEndOfGameGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolPreEndOfGameGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolPreEndOfGameGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolPreEndOfGameGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolPreEndOfGameGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolPreEndOfGameGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolPreEndOfGameGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolPreEndOfGameGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolPreEndOfGameGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolPreEndOfGameGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolPreEndOfGameGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolPreEndOfGameGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolPreEndOfGameGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolPreEndOfGameGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 