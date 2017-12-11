#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMissionsGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolMissionsGameflowPhase& v) {
    switch(v) { 
    case LolMissionsGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolMissionsGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolMissionsGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolMissionsGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolMissionsGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolMissionsGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolMissionsGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolMissionsGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolMissionsGameflowPhase::None_e:
      j = "None";
    break;
    case LolMissionsGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolMissionsGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolMissionsGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolMissionsGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolMissionsGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolMissionsGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolMissionsGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolMissionsGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolMissionsGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolMissionsGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolMissionsGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolMissionsGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolMissionsGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolMissionsGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolMissionsGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolMissionsGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolMissionsGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolMissionsGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolMissionsGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolMissionsGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 