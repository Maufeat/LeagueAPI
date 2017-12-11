#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolReplaysGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolReplaysGameflowPhase& v) {
    switch(v) { 
    case LolReplaysGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolReplaysGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolReplaysGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolReplaysGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolReplaysGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolReplaysGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolReplaysGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolReplaysGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolReplaysGameflowPhase::None_e:
      j = "None";
    break;
    case LolReplaysGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolReplaysGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolReplaysGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolReplaysGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolReplaysGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolReplaysGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolReplaysGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolReplaysGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolReplaysGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolReplaysGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolReplaysGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolReplaysGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolReplaysGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolReplaysGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolReplaysGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolReplaysGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolReplaysGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolReplaysGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolReplaysGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolReplaysGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 