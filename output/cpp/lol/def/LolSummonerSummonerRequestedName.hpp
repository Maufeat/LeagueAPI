#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerSummonerRequestedName { 
    std::string name; 
  };
  inline void to_json(json& j, const LolSummonerSummonerRequestedName& v) {
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolSummonerSummonerRequestedName& v) {
    v.name = j.at("name").get<std::string>(); 
  }
}