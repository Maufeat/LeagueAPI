#pragma once
#include "../base_def.hpp" 
#include "LolFeaturedModesGameflowAvailabilityState.hpp"
namespace lol {
  struct LolFeaturedModesGameflowAvailability { 
    bool isAvailable;
    LolFeaturedModesGameflowAvailabilityState state; 
  };
  inline void to_json(json& j, const LolFeaturedModesGameflowAvailability& v) {
    j["isAvailable"] = v.isAvailable; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolFeaturedModesGameflowAvailability& v) {
    v.isAvailable = j.at("isAvailable").get<bool>(); 
    v.state = j.at("state").get<LolFeaturedModesGameflowAvailabilityState>(); 
  }
}