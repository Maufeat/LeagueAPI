#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BindingFullEnumValueHelp { 
    std::string name;
    std::string description;
    int32_t value; 
  };
  inline void to_json(json& j, const BindingFullEnumValueHelp& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["value"] = v.value; 
  }
  inline void from_json(const json& j, BindingFullEnumValueHelp& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.value = j.at("value").get<int32_t>(); 
  }
}