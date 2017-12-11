#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PluginLcdsResponse { /**/ 
    std::string typeName;/**/
    json body;/**/
  };
  static void to_json(json& j, const PluginLcdsResponse& v) { 
    j["typeName"] = v.typeName;
    j["body"] = v.body;
  }
  static void from_json(const json& j, PluginLcdsResponse& v) { 
    v.typeName = j.at("typeName").get<std::string>(); 
    v.body = j.at("body").get<json>(); 
  }
} 