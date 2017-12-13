#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingFullEnumValueHelp { 
    std::string description;
    std::string name;
    int32_t value; 
  };
  void to_json(json& j, const BindingFullEnumValueHelp& v) {
  j["description"] = v.description; 
  j["name"] = v.name; 
  j["value"] = v.value; 
  }
  void from_json(const json& j, BindingFullEnumValueHelp& v) {
  v.description = j.at("description").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.value = j.at("value").get<int32_t>(); 
  }
}