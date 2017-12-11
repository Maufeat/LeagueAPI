#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class RiotMessagingServiceState { /**/ 
    Connected_e = 5, /**/ 
    Connecting_e = 3, /**/ 
    Disconnected_e = 1, /**/ 
    Disconnecting_e = 0, /**/ 
  };
  static void to_json(json& j, const RiotMessagingServiceState& v) {
    switch(v) { 
    case RiotMessagingServiceState::Connected_e:
      j = "Connected";
    break;
    case RiotMessagingServiceState::Connecting_e:
      j = "Connecting";
    break;
    case RiotMessagingServiceState::Disconnected_e:
      j = "Disconnected";
    break;
    case RiotMessagingServiceState::Disconnecting_e:
      j = "Disconnecting";
    break;
    };
  }
  static void from_json(const json& j, RiotMessagingServiceState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Connected") {
      v = RiotMessagingServiceState::Connected_e;
      return;
    } 
    if(s == "Connecting") {
      v = RiotMessagingServiceState::Connecting_e;
      return;
    } 
    if(s == "Disconnected") {
      v = RiotMessagingServiceState::Disconnected_e;
      return;
    } 
    if(s == "Disconnecting") {
      v = RiotMessagingServiceState::Disconnecting_e;
      return;
    } 
  }
} 