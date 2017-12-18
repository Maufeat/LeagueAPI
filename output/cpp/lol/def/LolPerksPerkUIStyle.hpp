#pragma once
#include "../base_def.hpp" 
#include "LolPerksPerkSubStyleBonusResource.hpp"
#include "LolPerksPerkUISlot.hpp"
namespace lol {
  struct LolPerksPerkUIStyle { 
    int32_t defaultSubStyle;
    std::string tooltip;
    std::string iconPath;
    std::string defaultPageName;
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    std::vector<int32_t> allowedSubStyles;
    std::string name;
    std::vector<LolPerksPerkUISlot> slots;
    std::vector<int32_t> defaultPerks;
    int32_t id; 
  };
  inline void to_json(json& j, const LolPerksPerkUIStyle& v) {
    j["defaultSubStyle"] = v.defaultSubStyle; 
    j["tooltip"] = v.tooltip; 
    j["iconPath"] = v.iconPath; 
    j["defaultPageName"] = v.defaultPageName; 
    j["subStyleBonus"] = v.subStyleBonus; 
    j["allowedSubStyles"] = v.allowedSubStyles; 
    j["name"] = v.name; 
    j["slots"] = v.slots; 
    j["defaultPerks"] = v.defaultPerks; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolPerksPerkUIStyle& v) {
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot>>(); 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}