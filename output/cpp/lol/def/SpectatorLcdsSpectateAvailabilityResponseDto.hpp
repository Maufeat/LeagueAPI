#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SpectatorLcdsSpectateAvailabilityResponseDto { 
    std::vector<std::string> availableForWatching; 
  };
  void to_json(json& j, const SpectatorLcdsSpectateAvailabilityResponseDto& v) {
    j["availableForWatching"] = v.availableForWatching; 
  }
  void from_json(const json& j, SpectatorLcdsSpectateAvailabilityResponseDto& v) {
    v.availableForWatching = j.at("availableForWatching").get<std::vector<std::string>>(); 
  }
}