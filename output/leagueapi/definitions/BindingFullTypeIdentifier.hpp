#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BindingFullTypeIdentifier { /*Describes the type of a value.*/ 
    std::string type;/**/
    std::string elementType;/**/
  };
  static void to_json(json& j, const BindingFullTypeIdentifier& v) { 
    j["type"] = v.type;
    j["elementType"] = v.elementType;
  }
  static void from_json(const json& j, BindingFullTypeIdentifier& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.elementType = j.at("elementType").get<std::string>(); 
  }
} 