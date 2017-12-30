#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolFeaturedModesMaps { 
    std::map<std::string, std::string> assets;
    bool isRGM;
    std::string gameModeName; 
  };
  inline void to_json(json& j, const LolFeaturedModesMaps& v) {
    j["assets"] = v.assets; 
    j["isRGM"] = v.isRGM; 
    j["gameModeName"] = v.gameModeName; 
  }
  inline void from_json(const json& j, LolFeaturedModesMaps& v) {
    v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
  }
}