#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPlayerBehaviorGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolPlayerBehaviorGameflowPhase& v) {
    switch(v) { 
    case LolPlayerBehaviorGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolPlayerBehaviorGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolPlayerBehaviorGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolPlayerBehaviorGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolPlayerBehaviorGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolPlayerBehaviorGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolPlayerBehaviorGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolPlayerBehaviorGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolPlayerBehaviorGameflowPhase::None_e:
      j = "None";
    break;
    case LolPlayerBehaviorGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolPlayerBehaviorGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolPlayerBehaviorGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolPlayerBehaviorGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolPlayerBehaviorGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolPlayerBehaviorGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolPlayerBehaviorGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolPlayerBehaviorGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolPlayerBehaviorGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolPlayerBehaviorGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolPlayerBehaviorGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolPlayerBehaviorGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolPlayerBehaviorGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolPlayerBehaviorGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolPlayerBehaviorGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolPlayerBehaviorGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolPlayerBehaviorGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolPlayerBehaviorGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolPlayerBehaviorGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolPlayerBehaviorGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 