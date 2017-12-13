#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BindingFullTypeIdentifier.hpp>
namespace lol {
  struct BindingFullEventHelp { 
    BindingFullTypeIdentifier type;
    std::string description;
    std::string name;
    std::vector<std::string> tags;
    std::string nameSpace; 
  };
  void to_json(json& j, const BindingFullEventHelp& v) {
  j["type"] = v.type; 
  j["description"] = v.description; 
  j["name"] = v.name; 
  j["tags"] = v.tags; 
  j["nameSpace"] = v.nameSpace; 
  }
  void from_json(const json& j, BindingFullEventHelp& v) {
  v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
  v.description = j.at("description").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.tags = j.at("tags").get<std::vector<std::string>>(); 
  v.nameSpace = j.at("nameSpace").get<std::string>(); 
  }
}