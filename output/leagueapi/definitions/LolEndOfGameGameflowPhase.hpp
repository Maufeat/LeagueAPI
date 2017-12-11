#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolEndOfGameGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolEndOfGameGameflowPhase& v) {
    switch(v) { 
    case LolEndOfGameGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolEndOfGameGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolEndOfGameGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolEndOfGameGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolEndOfGameGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolEndOfGameGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolEndOfGameGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolEndOfGameGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolEndOfGameGameflowPhase::None_e:
      j = "None";
    break;
    case LolEndOfGameGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolEndOfGameGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolEndOfGameGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolEndOfGameGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolEndOfGameGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolEndOfGameGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolEndOfGameGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolEndOfGameGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolEndOfGameGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolEndOfGameGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolEndOfGameGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolEndOfGameGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolEndOfGameGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolEndOfGameGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolEndOfGameGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolEndOfGameGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolEndOfGameGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolEndOfGameGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolEndOfGameGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolEndOfGameGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 