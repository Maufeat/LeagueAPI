#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BindingFullTypeIdentifier.hpp>
namespace lol {
  struct BindingFullArgumentHelp { 
    BindingFullTypeIdentifier type;
    std::string description;
    bool optional;
    std::string name; 
  };
  void to_json(json& j, const BindingFullArgumentHelp& v) {
  j["type"] = v.type; 
  j["description"] = v.description; 
  j["optional"] = v.optional; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, BindingFullArgumentHelp& v) {
  v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
  v.description = j.at("description").get<std::string>(); 
  v.optional = j.at("optional").get<bool>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}