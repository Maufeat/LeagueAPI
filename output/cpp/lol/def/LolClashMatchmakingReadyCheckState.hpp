#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashMatchmakingReadyCheckState {  
    Error_e = 5,
    EveryoneReady_e = 2,
    InProgress_e = 1,
    Invalid_e = 0,
    PartyNotReady_e = 4,
    StrangerNotReady_e = 3,
  };
  void to_json(json& j, const LolClashMatchmakingReadyCheckState& v) {
    if(v == LolClashMatchmakingReadyCheckState::Error_e) {
      j = "Error";
      return;
    }
    if(v == LolClashMatchmakingReadyCheckState::EveryoneReady_e) {
      j = "EveryoneReady";
      return;
    }
    if(v == LolClashMatchmakingReadyCheckState::InProgress_e) {
      j = "InProgress";
      return;
    }
    if(v == LolClashMatchmakingReadyCheckState::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == LolClashMatchmakingReadyCheckState::PartyNotReady_e) {
      j = "PartyNotReady";
      return;
    }
    if(v == LolClashMatchmakingReadyCheckState::StrangerNotReady_e) {
      j = "StrangerNotReady";
      return;
    }
  }
  void from_json(const json& j, LolClashMatchmakingReadyCheckState& v) {
    if(j.get<std::string>() == "Error") {
      v = LolClashMatchmakingReadyCheckState::Error_e;
      return;
    } 
    if(j.get<std::string>() == "EveryoneReady") {
      v = LolClashMatchmakingReadyCheckState::EveryoneReady_e;
      return;
    } 
    if(j.get<std::string>() == "InProgress") {
      v = LolClashMatchmakingReadyCheckState::InProgress_e;
      return;
    } 
    if(j.get<std::string>() == "Invalid") {
      v = LolClashMatchmakingReadyCheckState::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "PartyNotReady") {
      v = LolClashMatchmakingReadyCheckState::PartyNotReady_e;
      return;
    } 
    if(j.get<std::string>() == "StrangerNotReady") {
      v = LolClashMatchmakingReadyCheckState::StrangerNotReady_e;
      return;
    } 
  }
}