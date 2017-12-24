#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BindingFullEnumValueHelp { 
    std::string description;
    int32_t value;
    std::string name; 
  };
  inline void to_json(json& j, const BindingFullEnumValueHelp& v) {
    j["description"] = v.description; 
    j["value"] = v.value; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, BindingFullEnumValueHelp& v) {
    v.description = j.at("description").get<std::string>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}