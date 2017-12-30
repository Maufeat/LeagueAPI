#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPerkUIPerk { 
    std::string name;
    std::string iconPath;
    int32_t id;
    std::string tooltip;
    std::string longDesc;
    std::string shortDesc; 
  };
  inline void to_json(json& j, const LolPerksPerkUIPerk& v) {
    j["name"] = v.name; 
    j["iconPath"] = v.iconPath; 
    j["id"] = v.id; 
    j["tooltip"] = v.tooltip; 
    j["longDesc"] = v.longDesc; 
    j["shortDesc"] = v.shortDesc; 
  }
  inline void from_json(const json& j, LolPerksPerkUIPerk& v) {
    v.name = j.at("name").get<std::string>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.longDesc = j.at("longDesc").get<std::string>(); 
    v.shortDesc = j.at("shortDesc").get<std::string>(); 
  }
}