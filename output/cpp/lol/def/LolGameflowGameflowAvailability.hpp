#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowGameflowAvailabilityState.hpp>
namespace lol {
  struct LolGameflowGameflowAvailability { 
    LolGameflowGameflowAvailabilityState state;
    bool isAvailable; 
  };
  inline void to_json(json& j, const LolGameflowGameflowAvailability& v) {
    j["state"] = v.state; 
    j["isAvailable"] = v.isAvailable; 
  }
  inline void from_json(const json& j, LolGameflowGameflowAvailability& v) {
    v.state = j.at("state").get<LolGameflowGameflowAvailabilityState>(); 
    v.isAvailable = j.at("isAvailable").get<bool>(); 
  }
}