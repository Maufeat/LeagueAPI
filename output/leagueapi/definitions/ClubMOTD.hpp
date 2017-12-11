#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClubMOTD { /**/ 
    std::string motd;/**/
  };
  static void to_json(json& j, const ClubMOTD& v) { 
    j["motd"] = v.motd;
  }
  static void from_json(const json& j, ClubMOTD& v) { 
    v.motd = j.at("motd").get<std::string>(); 
  }
} 