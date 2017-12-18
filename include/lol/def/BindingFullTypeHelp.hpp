#pragma once
#include "../base_def.hpp" 
#include "BindingFullFieldHelp.hpp"
#include "BindingFullEnumValueHelp.hpp"
namespace lol {
  struct BindingFullTypeHelp { 
    std::vector<BindingFullFieldHelp> fields;
    std::vector<BindingFullEnumValueHelp> values;
    std::string nameSpace;
    uint32_t size;
    std::string description;
    std::string name;
    std::vector<std::string> tags; 
  };
  inline void to_json(json& j, const BindingFullTypeHelp& v) {
    j["fields"] = v.fields; 
    j["values"] = v.values; 
    j["nameSpace"] = v.nameSpace; 
    j["size"] = v.size; 
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["tags"] = v.tags; 
  }
  inline void from_json(const json& j, BindingFullTypeHelp& v) {
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp>>(); 
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp>>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
    v.size = j.at("size").get<uint32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
  }
}