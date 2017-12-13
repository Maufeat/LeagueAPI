#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct RiotMessagingServiceState {  
    Connected_e = 5,
    Connecting_e = 3,
    Disconnected_e = 1,
    Disconnecting_e = 0,
  };
  void to_json(json& j, const RiotMessagingServiceState& v) {
  if(v == RiotMessagingServiceState::Connected_e) {
    j = "Connected";
    return;
  }
  if(v == RiotMessagingServiceState::Connecting_e) {
    j = "Connecting";
    return;
  }
  if(v == RiotMessagingServiceState::Disconnected_e) {
    j = "Disconnected";
    return;
  }
  if(v == RiotMessagingServiceState::Disconnecting_e) {
    j = "Disconnecting";
    return;
  }
  }
  void from_json(const json& j, RiotMessagingServiceState& v) {
  if(j.get<std::string>() == "Connected") {
    v = RiotMessagingServiceState::Connected_e;
    return;
  } 
  if(j.get<std::string>() == "Connecting") {
    v = RiotMessagingServiceState::Connecting_e;
    return;
  } 
  if(j.get<std::string>() == "Disconnected") {
    v = RiotMessagingServiceState::Disconnected_e;
    return;
  } 
  if(j.get<std::string>() == "Disconnecting") {
    v = RiotMessagingServiceState::Disconnecting_e;
    return;
  } 
  }
}