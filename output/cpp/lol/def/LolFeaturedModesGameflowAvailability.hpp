#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolFeaturedModesGameflowAvailabilityState.hpp>
namespace lol {
  struct LolFeaturedModesGameflowAvailability { 
    LolFeaturedModesGameflowAvailabilityState state;
    bool isAvailable; 
  };
  void to_json(json& j, const LolFeaturedModesGameflowAvailability& v) {
    j["state"] = v.state; 
    j["isAvailable"] = v.isAvailable; 
  }
  void from_json(const json& j, LolFeaturedModesGameflowAvailability& v) {
    v.state = j.at("state").get<LolFeaturedModesGameflowAvailabilityState>(); 
    v.isAvailable = j.at("isAvailable").get<bool>(); 
  }
}