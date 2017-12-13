#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeague.hpp>
namespace lol {
  struct LolLeaguesApexLeagues { 
    std::vector<LolLeaguesLeague> challengers;
    std::vector<LolLeaguesLeague> masters; 
  };
  void to_json(json& j, const LolLeaguesApexLeagues& v) {
    j["challengers"] = v.challengers; 
    j["masters"] = v.masters; 
  }
  void from_json(const json& j, LolLeaguesApexLeagues& v) {
    v.challengers = j.at("challengers").get<std::vector<LolLeaguesLeague>>(); 
    v.masters = j.at("masters").get<std::vector<LolLeaguesLeague>>(); 
  }
}