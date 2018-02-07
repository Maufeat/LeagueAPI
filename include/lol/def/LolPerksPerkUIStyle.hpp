#pragma once
#include "../base_def.hpp" 
#include "LolPerksPerkSubStyleBonusResource.hpp"
#include "LolPerksPerkUISlot.hpp"
namespace lol {
  struct LolPerksPerkUIStyle { 
    std::vector<int32_t> allowedSubStyles;
    std::string iconPath;
    int32_t id;
    std::string name;
    std::vector<LolPerksPerkUISlot> slots;
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    std::string tooltip;
    int32_t defaultSubStyle;
    std::vector<int32_t> defaultPerks;
    std::string defaultPageName; 
  };
  inline void to_json(json& j, const LolPerksPerkUIStyle& v) {
    j["allowedSubStyles"] = v.allowedSubStyles; 
    j["iconPath"] = v.iconPath; 
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["slots"] = v.slots; 
    j["subStyleBonus"] = v.subStyleBonus; 
    j["tooltip"] = v.tooltip; 
    j["defaultSubStyle"] = v.defaultSubStyle; 
    j["defaultPerks"] = v.defaultPerks; 
    j["defaultPageName"] = v.defaultPageName; 
  }
  inline void from_json(const json& j, LolPerksPerkUIStyle& v) {
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot>>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
  }
}