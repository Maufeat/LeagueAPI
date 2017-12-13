#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerSummonerRequestedName { 
    std::string name; 
  };
  void to_json(json& j, const LolSummonerSummonerRequestedName& v) {
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolSummonerSummonerRequestedName& v) {
  v.name = j.at("name").get<std::string>(); 
  }
}