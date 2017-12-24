#pragma once
#include "../base_def.hpp" 
#include "BindingFullEnumValueHelp.hpp"
#include "BindingFullFieldHelp.hpp"
namespace lol {
  struct BindingFullTypeHelp { 
    uint32_t size;
    std::vector<std::string> tags;
    std::string name;
    std::string description;
    std::vector<BindingFullFieldHelp> fields;
    std::vector<BindingFullEnumValueHelp> values;
    std::string nameSpace; 
  };
  inline void to_json(json& j, const BindingFullTypeHelp& v) {
    j["size"] = v.size; 
    j["tags"] = v.tags; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["fields"] = v.fields; 
    j["values"] = v.values; 
    j["nameSpace"] = v.nameSpace; 
  }
  inline void from_json(const json& j, BindingFullTypeHelp& v) {
    v.size = j.at("size").get<uint32_t>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp>>(); 
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp>>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
  }
}