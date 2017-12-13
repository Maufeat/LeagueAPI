#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BindingFullFieldHelp.hpp>
#include <lol/def/BindingFullEnumValueHelp.hpp>
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
  void to_json(json& j, const BindingFullTypeHelp& v) {
  j["fields"] = v.fields; 
  j["values"] = v.values; 
  j["nameSpace"] = v.nameSpace; 
  j["size"] = v.size; 
  j["description"] = v.description; 
  j["name"] = v.name; 
  j["tags"] = v.tags; 
  }
  void from_json(const json& j, BindingFullTypeHelp& v) {
  v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp>>(); 
  v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp>>(); 
  v.nameSpace = j.at("nameSpace").get<std::string>(); 
  v.size = j.at("size").get<uint32_t>(); 
  v.description = j.at("description").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.tags = j.at("tags").get<std::vector<std::string>>(); 
  }
}