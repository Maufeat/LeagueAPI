#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolFeaturedModesMaps { 
    bool isRGM;
    std::string gameModeName;
    std::map<std::string, std::string> assets; 
  };
  void to_json(json& j, const LolFeaturedModesMaps& v) {
  j["isRGM"] = v.isRGM; 
  j["gameModeName"] = v.gameModeName; 
  j["assets"] = v.assets; 
  }
  void from_json(const json& j, LolFeaturedModesMaps& v) {
  v.isRGM = j.at("isRGM").get<bool>(); 
  v.gameModeName = j.at("gameModeName").get<std::string>(); 
  v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
  }
}