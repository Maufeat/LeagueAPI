#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/BindingFullTypeIdentifier.hpp>"

namespace leagueapi {
  struct BindingFullFieldHelp { /*Describes a member of a struct.*/ 
    uint32_t offset;/**/
    BindingFullTypeIdentifier type;/**/
    std::string description;/**/
    bool optional;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const BindingFullFieldHelp& v) { 
    j["offset"] = v.offset;
    j["type"] = v.type;
    j["description"] = v.description;
    j["optional"] = v.optional;
    j["name"] = v.name;
  }
  static void from_json(const json& j, BindingFullFieldHelp& v) { 
    v.offset = j.at("offset").get<uint32_t>(); 
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.description = j.at("description").get<std::string>(); 
    v.optional = j.at("optional").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 