#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BindingFullTypeIdentifier.hpp>
namespace lol {
  struct BindingFullFieldHelp { 
    BindingFullTypeIdentifier type;
    uint32_t offset;
    std::string description;
    std::string name;
    bool optional; 
  };
  inline void to_json(json& j, const BindingFullFieldHelp& v) {
    j["type"] = v.type; 
    j["offset"] = v.offset; 
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["optional"] = v.optional; 
  }
  inline void from_json(const json& j, BindingFullFieldHelp& v) {
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.offset = j.at("offset").get<uint32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.optional = j.at("optional").get<bool>(); 
  }
}