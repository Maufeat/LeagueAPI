#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolFeaturedModesGameflowPhase { /**/ 
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
  static void to_json(json& j, const LolFeaturedModesGameflowPhase& v) {
    switch(v) { 
    case LolFeaturedModesGameflowPhase::ChampSelect_e:
      j = "ChampSelect";
    break;
    case LolFeaturedModesGameflowPhase::CheckedIntoTournament_e:
      j = "CheckedIntoTournament";
    break;
    case LolFeaturedModesGameflowPhase::EndOfGame_e:
      j = "EndOfGame";
    break;
    case LolFeaturedModesGameflowPhase::FailedToLaunch_e:
      j = "FailedToLaunch";
    break;
    case LolFeaturedModesGameflowPhase::GameStart_e:
      j = "GameStart";
    break;
    case LolFeaturedModesGameflowPhase::InProgress_e:
      j = "InProgress";
    break;
    case LolFeaturedModesGameflowPhase::Lobby_e:
      j = "Lobby";
    break;
    case LolFeaturedModesGameflowPhase::Matchmaking_e:
      j = "Matchmaking";
    break;
    case LolFeaturedModesGameflowPhase::None_e:
      j = "None";
    break;
    case LolFeaturedModesGameflowPhase::PreEndOfGame_e:
      j = "PreEndOfGame";
    break;
    case LolFeaturedModesGameflowPhase::ReadyCheck_e:
      j = "ReadyCheck";
    break;
    case LolFeaturedModesGameflowPhase::Reconnect_e:
      j = "Reconnect";
    break;
    case LolFeaturedModesGameflowPhase::TerminatedInError_e:
      j = "TerminatedInError";
    break;
    case LolFeaturedModesGameflowPhase::WaitingForStats_e:
      j = "WaitingForStats";
    break;
    };
  }
  static void from_json(const json& j, LolFeaturedModesGameflowPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "ChampSelect") {
      v = LolFeaturedModesGameflowPhase::ChampSelect_e;
      return;
    } 
    if(s == "CheckedIntoTournament") {
      v = LolFeaturedModesGameflowPhase::CheckedIntoTournament_e;
      return;
    } 
    if(s == "EndOfGame") {
      v = LolFeaturedModesGameflowPhase::EndOfGame_e;
      return;
    } 
    if(s == "FailedToLaunch") {
      v = LolFeaturedModesGameflowPhase::FailedToLaunch_e;
      return;
    } 
    if(s == "GameStart") {
      v = LolFeaturedModesGameflowPhase::GameStart_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolFeaturedModesGameflowPhase::InProgress_e;
      return;
    } 
    if(s == "Lobby") {
      v = LolFeaturedModesGameflowPhase::Lobby_e;
      return;
    } 
    if(s == "Matchmaking") {
      v = LolFeaturedModesGameflowPhase::Matchmaking_e;
      return;
    } 
    if(s == "None") {
      v = LolFeaturedModesGameflowPhase::None_e;
      return;
    } 
    if(s == "PreEndOfGame") {
      v = LolFeaturedModesGameflowPhase::PreEndOfGame_e;
      return;
    } 
    if(s == "ReadyCheck") {
      v = LolFeaturedModesGameflowPhase::ReadyCheck_e;
      return;
    } 
    if(s == "Reconnect") {
      v = LolFeaturedModesGameflowPhase::Reconnect_e;
      return;
    } 
    if(s == "TerminatedInError") {
      v = LolFeaturedModesGameflowPhase::TerminatedInError_e;
      return;
    } 
    if(s == "WaitingForStats") {
      v = LolFeaturedModesGameflowPhase::WaitingForStats_e;
      return;
    } 
  }
} 