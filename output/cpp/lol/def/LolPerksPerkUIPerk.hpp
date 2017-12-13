#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksPerkUIPerk { 
    std::string shortDesc;
    int32_t id;
    std::string name;
    std::string iconPath;
    std::string tooltip;
    std::string longDesc; 
  };
  void to_json(json& j, const LolPerksPerkUIPerk& v) {
  j["shortDesc"] = v.shortDesc; 
  j["id"] = v.id; 
  j["name"] = v.name; 
  j["iconPath"] = v.iconPath; 
  j["tooltip"] = v.tooltip; 
  j["longDesc"] = v.longDesc; 
  }
  void from_json(const json& j, LolPerksPerkUIPerk& v) {
  v.shortDesc = j.at("shortDesc").get<std::string>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.name = j.at("name").get<std::string>(); 
  v.iconPath = j.at("iconPath").get<std::string>(); 
  v.tooltip = j.at("tooltip").get<std::string>(); 
  v.longDesc = j.at("longDesc").get<std::string>(); 
  }
}