#pragma once
#include "../base_def.hpp" 
#include "BindingFullEnumValueHelp.hpp"
#include "BindingFullFieldHelp.hpp"
namespace lol {
  struct BindingFullTypeHelp { 
    std::string name;
    std::string description;
    std::vector<std::string> tags;
    uint32_t size;
    std::string nameSpace;
    std::vector<BindingFullEnumValueHelp> values;
    std::vector<BindingFullFieldHelp> fields; 
  };
  inline void to_json(json& j, const BindingFullTypeHelp& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["tags"] = v.tags; 
    j["size"] = v.size; 
    j["nameSpace"] = v.nameSpace; 
    j["values"] = v.values; 
    j["fields"] = v.fields; 
  }
  inline void from_json(const json& j, BindingFullTypeHelp& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.size = j.at("size").get<uint32_t>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp>>(); 
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp>>(); 
  }
}