#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/BindingFullFieldHelp.hpp>"
#include "<leagueapi/definitions/BindingFullEnumValueHelp.hpp>"

namespace leagueapi {
  struct BindingFullTypeHelp { /*Describes a struct or enum type.*/ 
    std::string nameSpace;/**/
    std::vector<BindingFullFieldHelp> fields;/**/
    std::vector<std::string> tags;/**/
    std::string description;/**/
    std::vector<BindingFullEnumValueHelp> values;/**/
    std::string name;/**/
    uint32_t size;/**/
  };
  static void to_json(json& j, const BindingFullTypeHelp& v) { 
    j["nameSpace"] = v.nameSpace;
    j["fields"] = v.fields;
    j["tags"] = v.tags;
    j["description"] = v.description;
    j["values"] = v.values;
    j["name"] = v.name;
    j["size"] = v.size;
  }
  static void from_json(const json& j, BindingFullTypeHelp& v) { 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp>>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.description = j.at("description").get<std::string>(); 
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.size = j.at("size").get<uint32_t>(); 
  }
} 