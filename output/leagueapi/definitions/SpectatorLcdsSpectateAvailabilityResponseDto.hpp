#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SpectatorLcdsSpectateAvailabilityResponseDto { /**/ 
    std::vector<std::string> availableForWatching;/**/
  };
  static void to_json(json& j, const SpectatorLcdsSpectateAvailabilityResponseDto& v) { 
    j["availableForWatching"] = v.availableForWatching;
  }
  static void from_json(const json& j, SpectatorLcdsSpectateAvailabilityResponseDto& v) { 
    v.availableForWatching = j.at("availableForWatching").get<std::vector<std::string>>(); 
  }
} 