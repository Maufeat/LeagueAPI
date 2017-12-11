#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolEsportStreamNotificationsGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolEsportStreamNotificationsGameflowPhase& v) {
    switch(v) { 
    case LolEsportStreamNotificationsGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolEsportStreamNotificationsGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolEsportStreamNotificationsGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolEsportStreamNotificationsGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolEsportStreamNotificationsGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolEsportStreamNotificationsGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolEsportStreamNotificationsGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolEsportStreamNotificationsGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolEsportStreamNotificationsGameflowPhase::None_e:
      j = "None";
    break;
    case LolEsportStreamNotificationsGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolEsportStreamNotificationsGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolEsportStreamNotificationsGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolEsportStreamNotificationsGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolEsportStreamNotificationsGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolEsportStreamNotificationsGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolEsportStreamNotificationsGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolEsportStreamNotificationsGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolEsportStreamNotificationsGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolEsportStreamNotificationsGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolEsportStreamNotificationsGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolEsportStreamNotificationsGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolEsportStreamNotificationsGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolEsportStreamNotificationsGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolEsportStreamNotificationsGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolEsportStreamNotificationsGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolEsportStreamNotificationsGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolEsportStreamNotificationsGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolEsportStreamNotificationsGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolEsportStreamNotificationsGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 