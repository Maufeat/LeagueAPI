#pragma once
#include "../base_def.hpp" 
#include "BindingFullTypeIdentifier.hpp"
namespace lol {
  struct BindingFullFieldHelp { 
    std::string name;
    std::string description;
    uint32_t offset;
    BindingFullTypeIdentifier type;
    bool optional; 
  };
  inline void to_json(json& j, const BindingFullFieldHelp& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["offset"] = v.offset; 
    j["type"] = v.type; 
    j["optional"] = v.optional; 
  }
  inline void from_json(const json& j, BindingFullFieldHelp& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.offset = j.at("offset").get<uint32_t>(); 
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.optional = j.at("optional").get<bool>(); 
  }
}