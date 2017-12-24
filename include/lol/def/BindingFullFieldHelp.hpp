#pragma once
#include "../base_def.hpp" 
#include "BindingFullTypeIdentifier.hpp"
namespace lol {
  struct BindingFullFieldHelp { 
    std::string description;
    uint32_t offset;
    bool optional;
    BindingFullTypeIdentifier type;
    std::string name; 
  };
  inline void to_json(json& j, const BindingFullFieldHelp& v) {
    j["description"] = v.description; 
    j["offset"] = v.offset; 
    j["optional"] = v.optional; 
    j["type"] = v.type; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, BindingFullFieldHelp& v) {
    v.description = j.at("description").get<std::string>(); 
    v.offset = j.at("offset").get<uint32_t>(); 
    v.optional = j.at("optional").get<bool>(); 
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}