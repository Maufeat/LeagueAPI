#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolBannersClashV2FlagRewardSpec { 
    std::string level;
    std::string seasonId;
    std::string theme; 
  };
  void to_json(json& j, const LolBannersClashV2FlagRewardSpec& v) {
  j["level"] = v.level; 
  j["seasonId"] = v.seasonId; 
  j["theme"] = v.theme; 
  }
  void from_json(const json& j, LolBannersClashV2FlagRewardSpec& v) {
  v.level = j.at("level").get<std::string>(); 
  v.seasonId = j.at("seasonId").get<std::string>(); 
  v.theme = j.at("theme").get<std::string>(); 
  }
}