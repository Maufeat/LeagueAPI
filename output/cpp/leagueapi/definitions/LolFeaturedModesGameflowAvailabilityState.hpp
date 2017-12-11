#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolFeaturedModesGameflowAvailabilityState { /**/ 
    Available_e = 0, /**/ 
    Configuration_e = 5, /**/ 
    InGameFlow_e = 4, /**/ 
    Initializing_e = 1, /**/ 
    Patching_e = 2, /**/ 
    PlayerBanned_e = 3, /**/ 
  };
  static void to_json(json& j, const LolFeaturedModesGameflowAvailabilityState& v) {
    switch(v) { 
    case LolFeaturedModesGameflowAvailabilityState::Available_e:
      j = "Available";
    break;
    case LolFeaturedModesGameflowAvailabilityState::Configuration_e:
      j = "Configuration";
    break;
    case LolFeaturedModesGameflowAvailabilityState::InGameFlow_e:
      j = "InGameFlow";
    break;
    case LolFeaturedModesGameflowAvailabilityState::Initializing_e:
      j = "Initializing";
    break;
    case LolFeaturedModesGameflowAvailabilityState::Patching_e:
      j = "Patching";
    break;
    case LolFeaturedModesGameflowAvailabilityState::PlayerBanned_e:
      j = "PlayerBanned";
    break;
    };
  }
  static void from_json(const json& j, LolFeaturedModesGameflowAvailabilityState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Available") {
      v = LolFeaturedModesGameflowAvailabilityState::Available_e;
      return;
    } 
    if(s == "Configuration") {
      v = LolFeaturedModesGameflowAvailabilityState::Configuration_e;
      return;
    } 
    if(s == "InGameFlow") {
      v = LolFeaturedModesGameflowAvailabilityState::InGameFlow_e;
      return;
    } 
    if(s == "Initializing") {
      v = LolFeaturedModesGameflowAvailabilityState::Initializing_e;
      return;
    } 
    if(s == "Patching") {
      v = LolFeaturedModesGameflowAvailabilityState::Patching_e;
      return;
    } 
    if(s == "PlayerBanned") {
      v = LolFeaturedModesGameflowAvailabilityState::PlayerBanned_e;
      return;
    } 
  }
} 