#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLoadoutsGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolLoadoutsGameflowPhase& v) {
    switch(v) { 
    case LolLoadoutsGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolLoadoutsGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolLoadoutsGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolLoadoutsGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolLoadoutsGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolLoadoutsGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolLoadoutsGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolLoadoutsGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolLoadoutsGameflowPhase::None_e:
      j = "None";
    break;
    case LolLoadoutsGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolLoadoutsGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolLoadoutsGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolLoadoutsGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolLoadoutsGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolLoadoutsGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolLoadoutsGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolLoadoutsGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolLoadoutsGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolLoadoutsGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolLoadoutsGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolLoadoutsGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolLoadoutsGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolLoadoutsGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolLoadoutsGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolLoadoutsGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolLoadoutsGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolLoadoutsGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolLoadoutsGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolLoadoutsGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 