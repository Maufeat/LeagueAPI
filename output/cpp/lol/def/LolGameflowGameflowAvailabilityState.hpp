#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameflowGameflowAvailabilityState {  
    Available_e = 0,
    Configuration_e = 5,
    InGameFlow_e = 4,
    Initializing_e = 1,
    Patching_e = 2,
    PlayerBanned_e = 3,
  };
  void to_json(json& j, const LolGameflowGameflowAvailabilityState& v) {
  if(v == LolGameflowGameflowAvailabilityState::Available_e) {
    j = "Available";
    return;
  }
  if(v == LolGameflowGameflowAvailabilityState::Configuration_e) {
    j = "Configuration";
    return;
  }
  if(v == LolGameflowGameflowAvailabilityState::InGameFlow_e) {
    j = "InGameFlow";
    return;
  }
  if(v == LolGameflowGameflowAvailabilityState::Initializing_e) {
    j = "Initializing";
    return;
  }
  if(v == LolGameflowGameflowAvailabilityState::Patching_e) {
    j = "Patching";
    return;
  }
  if(v == LolGameflowGameflowAvailabilityState::PlayerBanned_e) {
    j = "PlayerBanned";
    return;
  }
  }
  void from_json(const json& j, LolGameflowGameflowAvailabilityState& v) {
  if(j.get<std::string>() == "Available") {
    v = LolGameflowGameflowAvailabilityState::Available_e;
    return;
  } 
  if(j.get<std::string>() == "Configuration") {
    v = LolGameflowGameflowAvailabilityState::Configuration_e;
    return;
  } 
  if(j.get<std::string>() == "InGameFlow") {
    v = LolGameflowGameflowAvailabilityState::InGameFlow_e;
    return;
  } 
  if(j.get<std::string>() == "Initializing") {
    v = LolGameflowGameflowAvailabilityState::Initializing_e;
    return;
  } 
  if(j.get<std::string>() == "Patching") {
    v = LolGameflowGameflowAvailabilityState::Patching_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerBanned") {
    v = LolGameflowGameflowAvailabilityState::PlayerBanned_e;
    return;
  } 
  }
}