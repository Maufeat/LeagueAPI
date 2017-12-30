#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BracketRoster { 
    std::string name;
    int64_t rosterId;
    int32_t logo;
    int32_t logoColor;
    std::string shortName; 
  };
  inline void to_json(json& j, const BracketRoster& v) {
    j["name"] = v.name; 
    j["rosterId"] = v.rosterId; 
    j["logo"] = v.logo; 
    j["logoColor"] = v.logoColor; 
    j["shortName"] = v.shortName; 
  }
  inline void from_json(const json& j, BracketRoster& v) {
    v.name = j.at("name").get<std::string>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
  }
}