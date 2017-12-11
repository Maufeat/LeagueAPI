#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/BindingFullTypeIdentifier.hpp>"

namespace leagueapi {
  struct BindingFullEventHelp { /*Describes an event.*/ 
    BindingFullTypeIdentifier type;/**/
    std::string nameSpace;/**/
    std::string description;/**/
    std::vector<std::string> tags;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const BindingFullEventHelp& v) { 
    j["type"] = v.type;
    j["nameSpace"] = v.nameSpace;
    j["description"] = v.description;
    j["tags"] = v.tags;
    j["name"] = v.name;
  }
  static void from_json(const json& j, BindingFullEventHelp& v) { 
    v.type = j.at("type").get<BindingFullTypeIdentifier>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 