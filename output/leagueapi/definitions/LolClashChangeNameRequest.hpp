#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashChangeNameRequest { /**/ 
    std::string name;/**/
  };
  static void to_json(json& j, const LolClashChangeNameRequest& v) { 
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolClashChangeNameRequest& v) { 
    v.name = j.at("name").get<std::string>(); 
  }
} 