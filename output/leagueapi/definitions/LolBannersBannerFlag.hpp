#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolBannersBannerFlag { /**/ 
    std::string level;/**/
    std::string seasonId;/**/
    std::string theme;/**/
  };
  static void to_json(json& j, const LolBannersBannerFlag& v) { 
    j["level"] = v.level;
    j["seasonId"] = v.seasonId;
    j["theme"] = v.theme;
  }
  static void from_json(const json& j, LolBannersBannerFlag& v) { 
    v.level = j.at("level").get<std::string>(); 
    v.seasonId = j.at("seasonId").get<std::string>(); 
    v.theme = j.at("theme").get<std::string>(); 
  }
} 