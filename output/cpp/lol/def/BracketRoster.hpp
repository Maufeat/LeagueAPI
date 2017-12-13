#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BracketRoster { 
    int64_t rosterId;
    std::string shortName;
    int32_t logo;
    int32_t logoColor;
    std::string name; 
  };
  void to_json(json& j, const BracketRoster& v) {
  j["rosterId"] = v.rosterId; 
  j["shortName"] = v.shortName; 
  j["logo"] = v.logo; 
  j["logoColor"] = v.logoColor; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, BracketRoster& v) {
  v.rosterId = j.at("rosterId").get<int64_t>(); 
  v.shortName = j.at("shortName").get<std::string>(); 
  v.logo = j.at("logo").get<int32_t>(); 
  v.logoColor = j.at("logoColor").get<int32_t>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}