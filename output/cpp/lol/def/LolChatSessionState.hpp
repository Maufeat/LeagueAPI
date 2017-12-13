#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChatSessionState {  
    connected_e = 1,
    disconnected_e = 3,
    initializing_e = 0,
    loaded_e = 2,
    shuttingdown_e = 4,
  };
  void to_json(json& j, const LolChatSessionState& v) {
  if(v == LolChatSessionState::connected_e) {
    j = "connected";
    return;
  }
  if(v == LolChatSessionState::disconnected_e) {
    j = "disconnected";
    return;
  }
  if(v == LolChatSessionState::initializing_e) {
    j = "initializing";
    return;
  }
  if(v == LolChatSessionState::loaded_e) {
    j = "loaded";
    return;
  }
  if(v == LolChatSessionState::shuttingdown_e) {
    j = "shuttingdown";
    return;
  }
  }
  void from_json(const json& j, LolChatSessionState& v) {
  if(j.get<std::string>() == "connected") {
    v = LolChatSessionState::connected_e;
    return;
  } 
  if(j.get<std::string>() == "disconnected") {
    v = LolChatSessionState::disconnected_e;
    return;
  } 
  if(j.get<std::string>() == "initializing") {
    v = LolChatSessionState::initializing_e;
    return;
  } 
  if(j.get<std::string>() == "loaded") {
    v = LolChatSessionState::loaded_e;
    return;
  } 
  if(j.get<std::string>() == "shuttingdown") {
    v = LolChatSessionState::shuttingdown_e;
    return;
  } 
  }
}