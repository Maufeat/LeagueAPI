#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolMatchmakingMatchmakingReadyCheckState {  
    Error_e = 5,
    EveryoneReady_e = 2,
    InProgress_e = 1,
    Invalid_e = 0,
    PartyNotReady_e = 4,
    StrangerNotReady_e = 3,
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckState& v) {
    if(v == LolMatchmakingMatchmakingReadyCheckState::Error_e) {
      j = "Error";
      return;
    }
    if(v == LolMatchmakingMatchmakingReadyCheckState::EveryoneReady_e) {
      j = "EveryoneReady";
      return;
    }
    if(v == LolMatchmakingMatchmakingReadyCheckState::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolMatchmakingMatchmakingReadyCheckState::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == LolMatchmakingMatchmakingReadyCheckState::PartyNotReady_e) {
      j = "PartyNotReady";
      return;
    }
    if(v == LolMatchmakingMatchmakingReadyCheckState::StrangerNotReady_e) {
      j = "StrangerNotReady";
      return;
    }
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckState& v) {
    if(j.get<std::string>() == "Error") {
      v = LolMatchmakingMatchmakingReadyCheckState::Error_e;
      return;
    } 
    if(j.get<std::string>() == "EveryoneReady") {
      v = LolMatchmakingMatchmakingReadyCheckState::EveryoneReady_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolMatchmakingMatchmakingReadyCheckState::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Invalid") {
      v = LolMatchmakingMatchmakingReadyCheckState::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "PartyNotReady") {
      v = LolMatchmakingMatchmakingReadyCheckState::PartyNotReady_e;
      return;
    } 
    if(j.get<std::string>() == "StrangerNotReady") {
      v = LolMatchmakingMatchmakingReadyCheckState::StrangerNotReady_e;
      return;
    } 
  }
}