#pragma once
#include "../base_def.hpp" 
#include "BindingFullTypeIdentifier.hpp"
namespace lol {
  struct BindingFullArgumentHelp { 
    std::string name;
    std::string description;
    BindingFullTypeIdentifier type;
    bool optional; 
  };
  inline void to_json(json& j, const BindingFullArgumentHelp& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["type"] = v.type; 
    j["optional"] = v.optional; 
  }
  inline void from_json(const json& j, BindingFullArgumentHelp& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.optional = j.at("optional").get<bool>(); 
  }
}