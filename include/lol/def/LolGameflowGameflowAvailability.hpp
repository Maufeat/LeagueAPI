#pragma once
#include "../base_def.hpp" 
#include "LolGameflowGameflowAvailabilityState.hpp"
namespace lol {
  struct LolGameflowGameflowAvailability { 
    bool isAvailable;
    LolGameflowGameflowAvailabilityState state; 
  };
  inline void to_json(json& j, const LolGameflowGameflowAvailability& v) {
    j["isAvailable"] = v.isAvailable; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolGameflowGameflowAvailability& v) {
    v.isAvailable = j.at("isAvailable").get<bool>(); 
    v.state = j.at("state").get<LolGameflowGameflowAvailabilityState>(); 
  }
}