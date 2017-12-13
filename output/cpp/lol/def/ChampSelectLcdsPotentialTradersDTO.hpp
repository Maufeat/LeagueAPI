#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ChampSelectLcdsPotentialTradersDTO { 
    std::vector<std::string> potentialTraders; 
  };
  void to_json(json& j, const ChampSelectLcdsPotentialTradersDTO& v) {
  j["potentialTraders"] = v.potentialTraders; 
  }
  void from_json(const json& j, ChampSelectLcdsPotentialTradersDTO& v) {
  v.potentialTraders = j.at("potentialTraders").get<std::vector<std::string>>(); 
  }
}