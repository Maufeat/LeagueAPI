#pragma once
#include "../base_def.hpp" 
#include "BindingFullTypeIdentifier.hpp"
namespace lol {
  struct BindingFullEventHelp { 
    std::string description;
    BindingFullTypeIdentifier type;
    std::vector<std::string> tags;
    std::string nameSpace;
    std::string name; 
  };
  inline void to_json(json& j, const BindingFullEventHelp& v) {
    j["description"] = v.description; 
    j["type"] = v.type; 
    j["tags"] = v.tags; 
    j["nameSpace"] = v.nameSpace; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, BindingFullEventHelp& v) {
    v.description = j.at("description").get<std::string>(); 
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}