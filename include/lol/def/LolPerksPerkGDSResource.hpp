#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPerkGDSResource { 
    std::string tooltip;
    std::string longDesc;
    std::string name;
    int32_t id;
    std::string iconPath;
    std::string shortDesc; 
  };
  inline void to_json(json& j, const LolPerksPerkGDSResource& v) {
    j["tooltip"] = v.tooltip; 
    j["longDesc"] = v.longDesc; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["iconPath"] = v.iconPath; 
    j["shortDesc"] = v.shortDesc; 
  }
  inline void from_json(const json& j, LolPerksPerkGDSResource& v) {
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.longDesc = j.at("longDesc").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.shortDesc = j.at("shortDesc").get<std::string>(); 
  }
}