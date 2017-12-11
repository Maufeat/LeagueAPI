#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameflowGameflowAvailabilityState { /**/ 
    Available_e = 0, /**/ 
    Configuration_e = 5, /**/ 
    InGameFlow_e = 4, /**/ 
    Initializing_e = 1, /**/ 
    Patching_e = 2, /**/ 
    PlayerBanned_e = 3, /**/ 
  };
  static void to_json(json& j, const LolGameflowGameflowAvailabilityState& v) {
    switch(v) { 
    case LolGameflowGameflowAvailabilityState::Available_e:
      j = "Available";
    break;
    case LolGameflowGameflowAvailabilityState::Configuration_e:
      j = "Configuration";
    break;
    case LolGameflowGameflowAvailabilityState::InGameFlow_e:
      j = "InGameFlow";
    break;
    case LolGameflowGameflowAvailabilityState::Initializing_e:
      j = "Initializing";
    break;
    case LolGameflowGameflowAvailabilityState::Patching_e:
      j = "Patching";
    break;
    case LolGameflowGameflowAvailabilityState::PlayerBanned_e:
      j = "PlayerBanned";
    break;
    };
  }
  static void from_json(const json& j, LolGameflowGameflowAvailabilityState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Available") {
      v = LolGameflowGameflowAvailabilityState::Available_e;
      return;
    } 
    if(s == "Configuration") {
      v = LolGameflowGameflowAvailabilityState::Configuration_e;
      return;
    } 
    if(s == "InGameFlow") {
      v = LolGameflowGameflowAvailabilityState::InGameFlow_e;
      return;
    } 
    if(s == "Initializing") {
      v = LolGameflowGameflowAvailabilityState::Initializing_e;
      return;
    } 
    if(s == "Patching") {
      v = LolGameflowGameflowAvailabilityState::Patching_e;
      return;
    } 
    if(s == "PlayerBanned") {
      v = LolGameflowGameflowAvailabilityState::PlayerBanned_e;
      return;
    } 
  }
} 