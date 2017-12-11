#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClubReferenceDto { /**/ 
    std::string clubKey;/**/
    std::string clubName;/**/
  };
  static void to_json(json& j, const ClubReferenceDto& v) { 
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
  }
  static void from_json(const json& j, ClubReferenceDto& v) { 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
  }
} 