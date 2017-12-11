#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPerksGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolPerksGameflowPhase& v) {
    switch(v) { 
    case LolPerksGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolPerksGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolPerksGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolPerksGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolPerksGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolPerksGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolPerksGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolPerksGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolPerksGameflowPhase::None_e:
      j = "None";
    break;
    case LolPerksGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolPerksGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolPerksGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolPerksGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolPerksGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolPerksGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolPerksGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolPerksGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolPerksGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolPerksGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolPerksGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolPerksGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolPerksGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolPerksGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolPerksGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolPerksGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolPerksGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolPerksGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolPerksGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolPerksGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 