#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChatSessionState { /**/ 
    connected_e = 1, /**/ 
    disconnected_e = 3, /**/ 
    initializing_e = 0, /**/ 
    loaded_e = 2, /**/ 
    shuttingdown_e = 4, /**/ 
  };
  static void to_json(json& j, const LolChatSessionState& v) {
    switch(v) { 
    case LolChatSessionState::connected_e:
      j = "connected";
    break;
    case LolChatSessionState::disconnected_e:
      j = "disconnected";
    break;
    case LolChatSessionState::initializing_e:
      j = "initializing";
    break;
    case LolChatSessionState::loaded_e:
      j = "loaded";
    break;
    case LolChatSessionState::shuttingdown_e:
      j = "shuttingdown";
    break;
    };
  }
  static void from_json(const json& j, LolChatSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "connected") {
      v = LolChatSessionState::connected_e;
      return;
    } 
    if(s == "disconnected") {
      v = LolChatSessionState::disconnected_e;
      return;
    } 
    if(s == "initializing") {
      v = LolChatSessionState::initializing_e;
      return;
    } 
    if(s == "loaded") {
      v = LolChatSessionState::loaded_e;
      return;
    } 
    if(s == "shuttingdown") {
      v = LolChatSessionState::shuttingdown_e;
      return;
    } 
  }
} 