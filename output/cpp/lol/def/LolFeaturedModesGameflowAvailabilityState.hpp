#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolFeaturedModesGameflowAvailabilityState {  
    Available_e = 0,
    Configuration_e = 5,
    InGameFlow_e = 4,
    Initializing_e = 1,
    Patching_e = 2,
    PlayerBanned_e = 3,
  };
  void to_json(json& j, const LolFeaturedModesGameflowAvailabilityState& v) {
  if(v == LolFeaturedModesGameflowAvailabilityState::Available_e) {
    j = "Available";
    return;
  }
  if(v == LolFeaturedModesGameflowAvailabilityState::Configuration_e) {
    j = "Configuration";
    return;
  }
  if(v == LolFeaturedModesGameflowAvailabilityState::InGameFlow_e) {
    j = "InGameFlow";
    return;
  }
  if(v == LolFeaturedModesGameflowAvailabilityState::Initializing_e) {
    j = "Initializing";
    return;
  }
  if(v == LolFeaturedModesGameflowAvailabilityState::Patching_e) {
    j = "Patching";
    return;
  }
  if(v == LolFeaturedModesGameflowAvailabilityState::PlayerBanned_e) {
    j = "PlayerBanned";
    return;
  }
  }
  void from_json(const json& j, LolFeaturedModesGameflowAvailabilityState& v) {
  if(j.get<std::string>() == "Available") {
    v = LolFeaturedModesGameflowAvailabilityState::Available_e;
    return;
  } 
  if(j.get<std::string>() == "Configuration") {
    v = LolFeaturedModesGameflowAvailabilityState::Configuration_e;
    return;
  } 
  if(j.get<std::string>() == "InGameFlow") {
    v = LolFeaturedModesGameflowAvailabilityState::InGameFlow_e;
    return;
  } 
  if(j.get<std::string>() == "Initializing") {
    v = LolFeaturedModesGameflowAvailabilityState::Initializing_e;
    return;
  } 
  if(j.get<std::string>() == "Patching") {
    v = LolFeaturedModesGameflowAvailabilityState::Patching_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerBanned") {
    v = LolFeaturedModesGameflowAvailabilityState::PlayerBanned_e;
    return;
  } 
  }
}