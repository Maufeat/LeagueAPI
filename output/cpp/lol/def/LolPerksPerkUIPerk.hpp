#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksPerkUIPerk { 
    std::string iconPath;
    std::string shortDesc;
    std::string tooltip;
    std::string name;
    std::string longDesc;
    int32_t id; 
  };
  void to_json(json& j, const LolPerksPerkUIPerk& v) {
    j["iconPath"] = v.iconPath; 
    j["shortDesc"] = v.shortDesc; 
    j["tooltip"] = v.tooltip; 
    j["name"] = v.name; 
    j["longDesc"] = v.longDesc; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolPerksPerkUIPerk& v) {
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.shortDesc = j.at("shortDesc").get<std::string>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.longDesc = j.at("longDesc").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}