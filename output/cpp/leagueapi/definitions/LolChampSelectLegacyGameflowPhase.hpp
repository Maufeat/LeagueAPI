#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolChampSelectLegacyGameflowPhase& v) {
    switch(v) { 
    case LolChampSelectLegacyGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolChampSelectLegacyGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolChampSelectLegacyGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolChampSelectLegacyGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolChampSelectLegacyGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolChampSelectLegacyGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolChampSelectLegacyGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolChampSelectLegacyGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolChampSelectLegacyGameflowPhase::None_e:
      j = "None";
    break;
    case LolChampSelectLegacyGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolChampSelectLegacyGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolChampSelectLegacyGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolChampSelectLegacyGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolChampSelectLegacyGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolChampSelectLegacyGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolChampSelectLegacyGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolChampSelectLegacyGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolChampSelectLegacyGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolChampSelectLegacyGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolChampSelectLegacyGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolChampSelectLegacyGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolChampSelectLegacyGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolChampSelectLegacyGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolChampSelectLegacyGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolChampSelectLegacyGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolChampSelectLegacyGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolChampSelectLegacyGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolChampSelectLegacyGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolChampSelectLegacyGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 