#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPftGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolPftGameflowPhase& v) {
    switch(v) { 
    case LolPftGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolPftGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolPftGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolPftGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolPftGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolPftGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolPftGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolPftGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolPftGameflowPhase::None_e:
      j = "None";
    break;
    case LolPftGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolPftGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolPftGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolPftGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolPftGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolPftGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolPftGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolPftGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolPftGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolPftGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolPftGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolPftGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolPftGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolPftGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolPftGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolPftGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolPftGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolPftGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolPftGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolPftGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 