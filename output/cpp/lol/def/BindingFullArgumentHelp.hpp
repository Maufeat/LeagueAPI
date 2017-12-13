#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BindingFullTypeIdentifier.hpp>
namespace lol {
  struct BindingFullArgumentHelp { 
    BindingFullTypeIdentifier type;
    std::string description;
    std::string name;
    bool optional; 
  };
  void to_json(json& j, const BindingFullArgumentHelp& v) {
    j["type"] = v.type; 
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["optional"] = v.optional; 
  }
  void from_json(const json& j, BindingFullArgumentHelp& v) {
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.optional = j.at("optional").get<bool>(); 
  }
}