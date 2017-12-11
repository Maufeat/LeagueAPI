#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingReadyCheckState { /**/ 
    Error_e = 5, /**/ 
    EveryoneReady_e = 2, /**/ 
    InProgress_e = 1, /**/ 
    Invalid_e = 0, /**/ 
    PartyNotReady_e = 4, /**/ 
    StrangerNotReady_e = 3, /**/ 
  };
  static void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckState& v) {
    switch(v) { 
    case LolMatchmakingMatchmakingReadyCheckState::Error_e:
      j = "Error";
    break;
    case LolMatchmakingMatchmakingReadyCheckState::EveryoneReady_e:
      j = "EveryoneReady";
    break;
    case LolMatchmakingMatchmakingReadyCheckState::InProgress_e:
      j = "InProgress";
    break;
    case LolMatchmakingMatchmakingReadyCheckState::Invalid_e:
      j = "Invalid";
    break;
    case LolMatchmakingMatchmakingReadyCheckState::PartyNotReady_e:
      j = "PartyNotReady";
    break;
    case LolMatchmakingMatchmakingReadyCheckState::StrangerNotReady_e:
      j = "StrangerNotReady";
    break;
    };
  }
  static void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Error") {
      v = LolMatchmakingMatchmakingReadyCheckState::Error_e;
      return;
    } 
    if(s == "EveryoneReady") {
      v = LolMatchmakingMatchmakingReadyCheckState::EveryoneReady_e;
      return;
    } 
    if(s == "InProgress") {
      v = LolMatchmakingMatchmakingReadyCheckState::InProgress_e;
      return;
    } 
    if(s == "Invalid") {
      v = LolMatchmakingMatchmakingReadyCheckState::Invalid_e;
      return;
    } 
    if(s == "PartyNotReady") {
      v = LolMatchmakingMatchmakingReadyCheckState::PartyNotReady_e;
      return;
    } 
    if(s == "StrangerNotReady") {
      v = LolMatchmakingMatchmakingReadyCheckState::StrangerNotReady_e;
      return;
    } 
  }
} 