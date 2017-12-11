#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingReadyCheckState { /**/ 
    Error_e = 5, /**/ 
    EveryoneReady_e = 2, /**/ 
    InProgress_e = 1, /**/ 
    Invalid_e = 0, /**/ 
    PartyNotReady_e = 4, /**/ 
    StrangerNotReady_e = 3, /**/ 
  };
  static void to_json(json& j, const LolClashMatchmakingReadyCheckState& v) {
    switch(v) { 
    case LolClashMatchmakingReadyCheckState::Error_e:
      j = "Error";
    break;
    case LolClashMatchmakingReadyCheckState::EveryoneReady_e:
      j = "EveryoneReady";
    break;
    case LolClashMatchmakingReadyCheckState::InProgress_e:
      j = "InProgress";
    break;
    case LolClashMatchmakingReadyCheckState::Invalid_e:
      j = "Invalid";
    break;
    case LolClashMatchmakingReadyCheckState::PartyNotReady_e:
      j = "PartyNotReady";
    break;
    case LolClashMatchmakingReadyCheckState::StrangerNotReady_e:
      j = "StrangerNotReady";
    break;
    };
  }
  static void from_json(const json& j, LolClashMatchmakingReadyCheckState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Error") {
      v = LolClashMatchmakingReadyCheckState::Error_e;
      return;
    } 
    if(s == "EveryoneReady") {
      v = LolClashMatchmakingReadyCheckState::EveryoneReady_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolClashMatchmakingReadyCheckState::InProgress_e;
      return;
    } 
    if(s == "Invalid") {
      v = LolClashMatchmakingReadyCheckState::Invalid_e;
      return;
    } 
    if(s == "PartyNotReady") {
      v = LolClashMatchmakingReadyCheckState::PartyNotReady_e;
      return;
    } 
    if(s == "StrangerNotReady") {
      v = LolClashMatchmakingReadyCheckState::StrangerNotReady_e;
      return;
    } 
  }
} 