#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPotentialTradersDTO { 
    std::vector<std::string> potentialTraders; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPotentialTradersDTO& v) {
    j["potentialTraders"] = v.potentialTraders; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPotentialTradersDTO& v) {
    v.potentialTraders = j.at("potentialTraders").get<std::vector<std::string>>(); 
  }
}