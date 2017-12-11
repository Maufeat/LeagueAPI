#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct Club { /**/ 
    std::string key;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const Club& v) { 
    j["key"] = v.key;
    j["name"] = v.name;
  }
  static void from_json(const json& j, Club& v) { 
    v.key = j.at("key").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 