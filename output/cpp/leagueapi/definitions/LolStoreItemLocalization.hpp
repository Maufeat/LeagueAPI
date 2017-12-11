#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreItemLocalization { /**/ 
    std::string description;/**/
    std::string language;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolStoreItemLocalization& v) { 
    j["description"] = v.description;
    j["language"] = v.language;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolStoreItemLocalization& v) { 
    v.description = j.at("description").get<std::string>(); 
    v.language = j.at("language").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 