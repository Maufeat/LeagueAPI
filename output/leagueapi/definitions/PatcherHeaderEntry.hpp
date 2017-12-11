#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PatcherHeaderEntry { /**/ 
    std::string value;/**/
    std::string key;/**/
  };
  static void to_json(json& j, const PatcherHeaderEntry& v) { 
    j["value"] = v.value;
    j["key"] = v.key;
  }
  static void from_json(const json& j, PatcherHeaderEntry& v) { 
    v.value = j.at("value").get<std::string>(); 
    v.key = j.at("key").get<std::string>(); 
  }
} 