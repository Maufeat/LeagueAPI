#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashTournamentState { /**/ 
    IDLE_e = 0, /**/ 
    IN_GAME_e = 3, /**/ 
    LOCK_IN_e = 1, /**/ 
    RESULTS_e = 4, /**/ 
    SCOUTING_e = 2, /**/ 
  };
  static void to_json(json& j, const LolClashTournamentState& v) {
    switch(v) { 
    case LolClashTournamentState::IDLE_e:
      j = "IDLE";
    break;
    case LolClashTournamentState::IN_GAME_e:
      j = "IN_GAME";
    break;
    case LolClashTournamentState::LOCK_IN_e:
      j = "LOCK_IN";
    break;
    case LolClashTournamentState::RESULTS_e:
      j = "RESULTS";
    break;
    case LolClashTournamentState::SCOUTING_e:
      j = "SCOUTING";
    break;
    };
  }
  static void from_json(const json& j, LolClashTournamentState& v) {
    auto s = j.get<std::string>(); 
    if(s == "IDLE") {
      v = LolClashTournamentState::IDLE_e;
      return;
    } 
    if(s == "IN_GAME") {
      v = LolClashTournamentState::IN_GAME_e;
      return;
    } 
    if(s == "LOCK_IN") {
      v = LolClashTournamentState::LOCK_IN_e;
      return;
    } 
    if(s == "RESULTS") {
      v = LolClashTournamentState::RESULTS_e;
      return;
    } 
    if(s == "SCOUTING") {
      v = LolClashTournamentState::SCOUTING_e;
      return;
    } 
  }
} 