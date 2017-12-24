#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolFeaturedModesMaps { 
    bool isRGM;
    std::map<std::string, std::string> assets;
    std::string gameModeName; 
  };
  inline void to_json(json& j, const LolFeaturedModesMaps& v) {
    j["isRGM"] = v.isRGM; 
    j["assets"] = v.assets; 
    j["gameModeName"] = v.gameModeName; 
  }
  inline void from_json(const json& j, LolFeaturedModesMaps& v) {
    v.isRGM = j.at("isRGM").get<bool>(); 
    v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
  }
}