#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolUserExperienceGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolUserExperienceGameflowPhase& v) {
    switch(v) { 
    case LolUserExperienceGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolUserExperienceGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolUserExperienceGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolUserExperienceGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolUserExperienceGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolUserExperienceGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolUserExperienceGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolUserExperienceGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolUserExperienceGameflowPhase::None_e:
      j = "None";
    break;
    case LolUserExperienceGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolUserExperienceGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolUserExperienceGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolUserExperienceGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolUserExperienceGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolUserExperienceGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolUserExperienceGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolUserExperienceGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolUserExperienceGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolUserExperienceGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolUserExperienceGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolUserExperienceGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolUserExperienceGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolUserExperienceGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolUserExperienceGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolUserExperienceGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolUserExperienceGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolUserExperienceGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolUserExperienceGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolUserExperienceGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 