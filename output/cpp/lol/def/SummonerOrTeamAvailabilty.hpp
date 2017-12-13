#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SummonerOrTeamAvailabilty { 
    std::vector<std::string> availableForWatching; 
  };
  void to_json(json& j, const SummonerOrTeamAvailabilty& v) {
    j["availableForWatching"] = v.availableForWatching; 
  }
  void from_json(const json& j, SummonerOrTeamAvailabilty& v) {
    v.availableForWatching = j.at("availableForWatching").get<std::vector<std::string>>(); 
  }
}