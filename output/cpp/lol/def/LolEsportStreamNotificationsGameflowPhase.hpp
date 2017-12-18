#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolEsportStreamNotificationsGameflowPhase {  
    ChampSelect_e = 5,
    CheckedIntoTournament_e = 3,
    EndOfGame_e = 12,
    FailedToLaunch_e = 7,
    GameStart_e = 6,
    InProgress_e = 8,
    Lobby_e = 1,
    Matchmaking_e = 2,
    None_e = 0,
    PreEndOfGame_e = 11,
    ReadyCheck_e = 4,
    Reconnect_e = 9,
    TerminatedInError_e = 13,
    WaitingForStats_e = 10,
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsGameflowPhase& v) {
    if(v == LolEsportStreamNotificationsGameflowPhase::ChampSelect_e) {
      j = "ChampSelect";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::CheckedIntoTournament_e) {
      j = "CheckedIntoTournament";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::EndOfGame_e) {
      j = "EndOfGame";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::FailedToLaunch_e) {
      j = "FailedToLaunch";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::GameStart_e) {
      j = "GameStart";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::Lobby_e) {
      j = "Lobby";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::Matchmaking_e) {
      j = "Matchmaking";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::PreEndOfGame_e) {
      j = "PreEndOfGame";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::ReadyCheck_e) {
      j = "ReadyCheck";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::Reconnect_e) {
      j = "Reconnect";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::TerminatedInError_e) {
      j = "TerminatedInError";
      return;
    }
    if(v == LolEsportStreamNotificationsGameflowPhase::WaitingForStats_e) {
      j = "WaitingForStats";
      return;
    }
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsGameflowPhase& v) {
    if(j.get<std::string>() == "ChampSelect") {
      v = LolEsportStreamNotificationsGameflowPhase::ChampSelect_e;
      return;
    } 
    if(j.get<std::string>() == "CheckedIntoTournament") {
      v = LolEsportStreamNotificationsGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(j.get<std::string>() == "EndOfGame") {
      v = LolEsportStreamNotificationsGameflowPhase::EndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToLaunch") {
      v = LolEsportStreamNotificationsGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "GameStart") {
      v = LolEsportStreamNotificationsGameflowPhase::GameStart_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolEsportStreamNotificationsGameflowPhase::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Lobby") {
      v = LolEsportStreamNotificationsGameflowPhase::Lobby_e;
      return;
    } 
    if(j.get<std::string>() == "Matchmaking") {
      v = LolEsportStreamNotificationsGameflowPhase::Matchmaking_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolEsportStreamNotificationsGameflowPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "PreEndOfGame") {
      v = LolEsportStreamNotificationsGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(j.get<std::string>() == "ReadyCheck") {
      v = LolEsportStreamNotificationsGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(j.get<std::string>() == "Reconnect") {
      v = LolEsportStreamNotificationsGameflowPhase::Reconnect_e;
      return;
    } 
    if(j.get<std::string>() == "TerminatedInError") {
      v = LolEsportStreamNotificationsGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(j.get<std::string>() == "WaitingForStats") {
      v = LolEsportStreamNotificationsGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
}