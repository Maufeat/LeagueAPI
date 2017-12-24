#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BracketRoster { 
    int64_t rosterId;
    std::string shortName;
    int32_t logoColor;
    int32_t logo;
    std::string name; 
  };
  inline void to_json(json& j, const BracketRoster& v) {
    j["rosterId"] = v.rosterId; 
    j["shortName"] = v.shortName; 
    j["logoColor"] = v.logoColor; 
    j["logo"] = v.logo; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, BracketRoster& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}