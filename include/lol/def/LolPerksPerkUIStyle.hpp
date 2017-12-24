#pragma once
#include "../base_def.hpp" 
#include "LolPerksPerkUISlot.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace lol {
  struct LolPerksPerkUIStyle { 
    int32_t id;
    std::string tooltip;
    std::vector<LolPerksPerkUISlot> slots;
    int32_t defaultSubStyle;
    std::string name;
    std::vector<int32_t> allowedSubStyles;
    std::string defaultPageName;
    std::string iconPath;
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    std::vector<int32_t> defaultPerks; 
  };
  inline void to_json(json& j, const LolPerksPerkUIStyle& v) {
    j["id"] = v.id; 
    j["tooltip"] = v.tooltip; 
    j["slots"] = v.slots; 
    j["defaultSubStyle"] = v.defaultSubStyle; 
    j["name"] = v.name; 
    j["allowedSubStyles"] = v.allowedSubStyles; 
    j["defaultPageName"] = v.defaultPageName; 
    j["iconPath"] = v.iconPath; 
    j["subStyleBonus"] = v.subStyleBonus; 
    j["defaultPerks"] = v.defaultPerks; 
  }
  inline void from_json(const json& j, LolPerksPerkUIStyle& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot>>(); 
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
  }
}