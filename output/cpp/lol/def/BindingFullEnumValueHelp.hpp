#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingFullEnumValueHelp { 
    int32_t value;
    std::string description;
    std::string name; 
  };
  void to_json(json& j, const BindingFullEnumValueHelp& v) {
  j["value"] = v.value; 
  j["description"] = v.description; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, BindingFullEnumValueHelp& v) {
  v.value = j.at("value").get<int32_t>(); 
  v.description = j.at("description").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}