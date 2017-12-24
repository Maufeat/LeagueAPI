#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct Club { 
    std::string key;
    std::string name; 
  };
  inline void to_json(json& j, const Club& v) {
    j["key"] = v.key; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, Club& v) {
    v.key = j.at("key").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}