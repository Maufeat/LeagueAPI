#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolBannersBannerFlag { 
    std::string theme;
    std::string seasonId;
    std::string level; 
  };
  inline void to_json(json& j, const LolBannersBannerFlag& v) {
    j["theme"] = v.theme; 
    j["seasonId"] = v.seasonId; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, LolBannersBannerFlag& v) {
    v.theme = j.at("theme").get<std::string>(); 
    v.seasonId = j.at("seasonId").get<std::string>(); 
    v.level = j.at("level").get<std::string>(); 
  }
}