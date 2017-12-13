#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolBannersBannerFlag { 
    std::string seasonId;
    std::string theme;
    std::string level; 
  };
  void to_json(json& j, const LolBannersBannerFlag& v) {
  j["seasonId"] = v.seasonId; 
  j["theme"] = v.theme; 
  j["level"] = v.level; 
  }
  void from_json(const json& j, LolBannersBannerFlag& v) {
  v.seasonId = j.at("seasonId").get<std::string>(); 
  v.theme = j.at("theme").get<std::string>(); 
  v.level = j.at("level").get<std::string>(); 
  }
}