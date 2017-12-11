#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoginLcdsResponse { /**/ 
    std::string typeName;/**/
    json body;/**/
  };
  static void to_json(json& j, const LolLoginLcdsResponse& v) { 
    j["typeName"] = v.typeName;
    j["body"] = v.body;
  }
  static void from_json(const json& j, LolLoginLcdsResponse& v) { 
    v.typeName = j.at("typeName").get<std::string>(); 
    v.body = j.at("body").get<json>(); 
  }
} 