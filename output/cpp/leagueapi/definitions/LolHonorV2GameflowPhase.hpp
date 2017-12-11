#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolHonorV2GameflowPhase { /**/ 
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
  static void to_json(json& j, const LolHonorV2GameflowPhase& v) {
    switch(v) { 
    case LolHonorV2GameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolHonorV2GameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolHonorV2GameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolHonorV2GameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolHonorV2GameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolHonorV2GameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolHonorV2GameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolHonorV2GameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolHonorV2GameflowPhase::None_e:
      j = "None";
    break;
    case LolHonorV2GameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolHonorV2GameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolHonorV2GameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolHonorV2GameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolHonorV2GameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolHonorV2GameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolHonorV2GameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolHonorV2GameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolHonorV2GameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolHonorV2GameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolHonorV2GameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolHonorV2GameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolHonorV2GameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolHonorV2GameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolHonorV2GameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolHonorV2GameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolHonorV2GameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolHonorV2GameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolHonorV2GameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolHonorV2GameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 