#pragma once
#include "../base_def.hpp" 
#include "BindingFullEnumValueHelp.hpp"
#include "BindingFullFieldHelp.hpp"
namespace lol {
  struct BindingFullTypeHelp { 
    std::string name;
    std::string nameSpace;
    uint32_t size;
    std::string description;
    std::vector<std::string> tags;
    std::vector<BindingFullFieldHelp> fields;
    std::vector<BindingFullEnumValueHelp> values; 
  };
  inline void to_json(json& j, const BindingFullTypeHelp& v) {
    j["name"] = v.name; 
    j["nameSpace"] = v.nameSpace; 
    j["size"] = v.size; 
    j["description"] = v.description; 
    j["tags"] = v.tags; 
    j["fields"] = v.fields; 
    j["values"] = v.values; 
  }
  inline void from_json(const json& j, BindingFullTypeHelp& v) {
    v.name = j.at("name").get<std::string>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
    v.size = j.at("size").get<uint32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp>>(); 
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp>>(); 
  }
}