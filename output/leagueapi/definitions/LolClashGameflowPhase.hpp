#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolClashGameflowPhase& v) {
    switch(v) { 
    case LolClashGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolClashGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolClashGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolClashGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolClashGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolClashGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolClashGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolClashGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolClashGameflowPhase::None_e:
      j = "None";
    break;
    case LolClashGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolClashGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolClashGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolClashGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolClashGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolClashGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolClashGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolClashGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolClashGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolClashGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolClashGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolClashGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolClashGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolClashGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolClashGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolClashGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolClashGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolClashGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolClashGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolClashGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 