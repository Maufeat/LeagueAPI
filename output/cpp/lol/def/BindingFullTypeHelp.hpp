#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BindingFullEnumValueHelp.hpp>
#include <lol/def/BindingFullFieldHelp.hpp>
namespace lol {
  struct BindingFullTypeHelp { 
    std::string nameSpace;
    std::vector<BindingFullFieldHelp> fields;
    std::vector<std::string> tags;
    std::string description;
    std::vector<BindingFullEnumValueHelp> values;
    std::string name;
    uint32_t size; 
  };
  void to_json(json& j, const BindingFullTypeHelp& v) {
  j["nameSpace"] = v.nameSpace; 
  j["fields"] = v.fields; 
  j["tags"] = v.tags; 
  j["description"] = v.description; 
  j["values"] = v.values; 
  j["name"] = v.name; 
  j["size"] = v.size; 
  }
  void from_json(const json& j, BindingFullTypeHelp& v) {
  v.nameSpace = j.at("nameSpace").get<std::string>(); 
  v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp>>(); 
  v.tags = j.at("tags").get<std::vector<std::string>>(); 
  v.description = j.at("description").get<std::string>(); 
  v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp>>(); 
  v.name = j.at("name").get<std::string>(); 
  v.size = j.at("size").get<uint32_t>(); 
  }
}