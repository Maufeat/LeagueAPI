#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLootGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolLootGameflowPhase& v) {
    switch(v) { 
    case LolLootGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolLootGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolLootGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolLootGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolLootGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolLootGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolLootGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolLootGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolLootGameflowPhase::None_e:
      j = "None";
    break;
    case LolLootGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolLootGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolLootGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolLootGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolLootGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolLootGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolLootGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolLootGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolLootGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolLootGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolLootGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolLootGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolLootGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolLootGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolLootGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolLootGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolLootGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolLootGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolLootGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolLootGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 