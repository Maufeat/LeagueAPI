#pragma once
#include "../base_def.hpp" 
#include "BindingFullTypeIdentifier.hpp"
namespace lol {
  struct BindingFullEventHelp { 
    std::string name;
    std::string nameSpace;
    BindingFullTypeIdentifier type;
    std::string description;
    std::vector<std::string> tags; 
  };
  inline void to_json(json& j, const BindingFullEventHelp& v) {
    j["name"] = v.name; 
    j["nameSpace"] = v.nameSpace; 
    j["type"] = v.type; 
    j["description"] = v.description; 
    j["tags"] = v.tags; 
  }
  inline void from_json(const json& j, BindingFullEventHelp& v) {
    v.name = j.at("name").get<std::string>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.description = j.at("description").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
  }
}