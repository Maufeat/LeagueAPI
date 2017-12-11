#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLeaguesGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolLeaguesGameflowPhase& v) {
    switch(v) { 
    case LolLeaguesGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolLeaguesGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolLeaguesGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolLeaguesGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolLeaguesGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolLeaguesGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolLeaguesGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolLeaguesGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolLeaguesGameflowPhase::None_e:
      j = "None";
    break;
    case LolLeaguesGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolLeaguesGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolLeaguesGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolLeaguesGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolLeaguesGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolLeaguesGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolLeaguesGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolLeaguesGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolLeaguesGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolLeaguesGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolLeaguesGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolLeaguesGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolLeaguesGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolLeaguesGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolLeaguesGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolLeaguesGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolLeaguesGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolLeaguesGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolLeaguesGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolLeaguesGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 