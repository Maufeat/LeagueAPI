#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChatGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolChatGameflowPhase& v) {
    switch(v) { 
    case LolChatGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolChatGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolChatGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolChatGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolChatGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolChatGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolChatGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolChatGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolChatGameflowPhase::None_e:
      j = "None";
    break;
    case LolChatGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolChatGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolChatGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolChatGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolChatGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolChatGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolChatGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolChatGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolChatGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolChatGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolChatGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolChatGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolChatGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolChatGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolChatGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolChatGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolChatGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolChatGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolChatGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolChatGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 