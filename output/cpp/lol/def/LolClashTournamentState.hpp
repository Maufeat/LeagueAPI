#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashTournamentState {  
    IDLE_e = 0,
    IN_GAME_e = 3,
    LOCK_IN_e = 1,
    RESULTS_e = 4,
    SCOUTING_e = 2,
  };
  void to_json(json& j, const LolClashTournamentState& v) {
    if(v == LolClashTournamentState::IDLE_e) {
      j = "IDLE";
      return;
    }
    if(v == LolClashTournamentState::IN_GAME_e) {
      j = "IN_GAME";
      return;
    }
    if(v == LolClashTournamentState::LOCK_IN_e) {
      j = "LOCK_IN";
      return;
    }
    if(v == LolClashTournamentState::RESULTS_e) {
      j = "RESULTS";
      return;
    }
    if(v == LolClashTournamentState::SCOUTING_e) {
      j = "SCOUTING";
      return;
    }
  }
  void from_json(const json& j, LolClashTournamentState& v) {
    if(j.get<std::string>() == "IDLE") {
      v = LolClashTournamentState::IDLE_e;
      return;
    } 
    if(j.get<std::string>() == "IN_GAME") {
      v = LolClashTournamentState::IN_GAME_e;
      return;
    } 
    if(j.get<std::string>() == "LOCK_IN") {
      v = LolClashTournamentState::LOCK_IN_e;
      return;
    } 
    if(j.get<std::string>() == "RESULTS") {
      v = LolClashTournamentState::RESULTS_e;
      return;
    } 
    if(j.get<std::string>() == "SCOUTING") {
      v = LolClashTournamentState::SCOUTING_e;
      return;
    } 
  }
}