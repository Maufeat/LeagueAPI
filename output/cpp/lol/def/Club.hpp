#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct Club { 
    std::string name;
    std::string key; 
  };
  void to_json(json& j, const Club& v) {
    j["name"] = v.name; 
    j["key"] = v.key; 
  }
  void from_json(const json& j, Club& v) {
    v.name = j.at("name").get<std::string>(); 
    v.key = j.at("key").get<std::string>(); 
  }
}