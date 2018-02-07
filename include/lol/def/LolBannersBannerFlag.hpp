#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolBannersBannerFlag { 
    std::string theme;
    std::string level;
    std::string seasonId; 
  };
  inline void to_json(json& j, const LolBannersBannerFlag& v) {
    j["theme"] = v.theme; 
    j["level"] = v.level; 
    j["seasonId"] = v.seasonId; 
  }
  inline void from_json(const json& j, LolBannersBannerFlag& v) {
    v.theme = j.at("theme").get<std::string>(); 
    v.level = j.at("level").get<std::string>(); 
    v.seasonId = j.at("seasonId").get<std::string>(); 
  }
}