#pragma once
#include "../base_def.hpp" 
#include "LolPerksPerkUISlot.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace lol {
  struct LolPerksPerkUIStyle { 
    std::string name;
    std::string iconPath;
    int32_t id;
    int32_t defaultSubStyle;
    std::vector<LolPerksPerkUISlot> slots;
    std::string defaultPageName;
    std::vector<int32_t> defaultPerks;
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    std::string tooltip;
    std::vector<int32_t> allowedSubStyles; 
  };
  inline void to_json(json& j, const LolPerksPerkUIStyle& v) {
    j["name"] = v.name; 
    j["iconPath"] = v.iconPath; 
    j["id"] = v.id; 
    j["defaultSubStyle"] = v.defaultSubStyle; 
    j["slots"] = v.slots; 
    j["defaultPageName"] = v.defaultPageName; 
    j["defaultPerks"] = v.defaultPerks; 
    j["subStyleBonus"] = v.subStyleBonus; 
    j["tooltip"] = v.tooltip; 
    j["allowedSubStyles"] = v.allowedSubStyles; 
  }
  inline void from_json(const json& j, LolPerksPerkUIStyle& v) {
    v.name = j.at("name").get<std::string>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot>>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
  }
}