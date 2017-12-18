#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolBannersClashV2FlagRewardSpec { 
    std::string seasonId;
    std::string theme;
    std::string level; 
  };
  inline void to_json(json& j, const LolBannersClashV2FlagRewardSpec& v) {
    j["seasonId"] = v.seasonId; 
    j["theme"] = v.theme; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, LolBannersClashV2FlagRewardSpec& v) {
    v.seasonId = j.at("seasonId").get<std::string>(); 
    v.theme = j.at("theme").get<std::string>(); 
    v.level = j.at("level").get<std::string>(); 
  }
}