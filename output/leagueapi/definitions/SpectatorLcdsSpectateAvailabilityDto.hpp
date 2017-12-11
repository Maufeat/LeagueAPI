#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SpectatorLcdsSpectateAvailabilityDto { /**/ 
    std::vector<std::string> teamOrSummonerIds;/**/
  };
  static void to_json(json& j, const SpectatorLcdsSpectateAvailabilityDto& v) { 
    j["teamOrSummonerIds"] = v.teamOrSummonerIds;
  }
  static void from_json(const json& j, SpectatorLcdsSpectateAvailabilityDto& v) { 
    v.teamOrSummonerIds = j.at("teamOrSummonerIds").get<std::vector<std::string>>(); 
  }
} 