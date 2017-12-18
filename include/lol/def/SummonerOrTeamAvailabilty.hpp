#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SummonerOrTeamAvailabilty { 
    std::vector<std::string> availableForWatching; 
  };
  inline void to_json(json& j, const SummonerOrTeamAvailabilty& v) {
    j["availableForWatching"] = v.availableForWatching; 
  }
  inline void from_json(const json& j, SummonerOrTeamAvailabilty& v) {
    v.availableForWatching = j.at("availableForWatching").get<std::vector<std::string>>(); 
  }
}