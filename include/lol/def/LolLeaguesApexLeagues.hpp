#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeague.hpp"
namespace lol {
  struct LolLeaguesApexLeagues { 
    std::vector<LolLeaguesLeague> masters;
    std::vector<LolLeaguesLeague> challengers; 
  };
  inline void to_json(json& j, const LolLeaguesApexLeagues& v) {
    j["masters"] = v.masters; 
    j["challengers"] = v.challengers; 
  }
  inline void from_json(const json& j, LolLeaguesApexLeagues& v) {
    v.masters = j.at("masters").get<std::vector<LolLeaguesLeague>>(); 
    v.challengers = j.at("challengers").get<std::vector<LolLeaguesLeague>>(); 
  }
}