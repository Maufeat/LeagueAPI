#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/BindingFullTypeIdentifier.hpp>

namespace leagueapi {
  struct BindingFullArgumentHelp { /*Describes a function parameter.*/ 
    BindingFullTypeIdentifier type;/**/
    std::string description;/**/
    bool optional;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const BindingFullArgumentHelp& v) { 
    j["type"] = v.type;
    j["description"] = v.description;
    j["optional"] = v.optional;
    j["name"] = v.name;
  }
  static void from_json(const json& j, BindingFullArgumentHelp& v) { 
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.description = j.at("description").get<std::string>(); 
    v.optional = j.at("optional").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 