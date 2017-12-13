#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolFeaturedModesMaps { 
    std::map<std::string, std::string> assets;
    std::string gameModeName;
    bool isRGM; 
  };
  void to_json(json& j, const LolFeaturedModesMaps& v) {
    j["assets"] = v.assets; 
    j["gameModeName"] = v.gameModeName; 
    j["isRGM"] = v.isRGM; 
  }
  void from_json(const json& j, LolFeaturedModesMaps& v) {
    v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
  }
}