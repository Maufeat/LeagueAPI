#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClubTag { /**/ 
    std::string tag;/**/
  };
  static void to_json(json& j, const ClubTag& v) { 
    j["tag"] = v.tag;
  }
  static void from_json(const json& j, ClubTag& v) { 
    v.tag = j.at("tag").get<std::string>(); 
  }
} 