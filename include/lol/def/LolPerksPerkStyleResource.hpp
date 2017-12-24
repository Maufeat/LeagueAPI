#pragma once
#include "../base_def.hpp" 
#include "LolPerksPerkStyleSlotResource.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace lol {
  struct LolPerksPerkStyleResource { 
    bool isAdvanced;
    int32_t id;
    std::vector<LolPerksPerkStyleSlotResource> slots;
    int32_t defaultSubStyle;
    std::string name;
    std::vector<int32_t> allowedSubStyles;
    std::string defaultPageName;
    std::string tooltip;
    std::string iconPath;
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    std::vector<int32_t> defaultPerks; 
  };
  inline void to_json(json& j, const LolPerksPerkStyleResource& v) {
    j["isAdvanced"] = v.isAdvanced; 
    j["id"] = v.id; 
    j["slots"] = v.slots; 
    j["defaultSubStyle"] = v.defaultSubStyle; 
    j["name"] = v.name; 
    j["allowedSubStyles"] = v.allowedSubStyles; 
    j["defaultPageName"] = v.defaultPageName; 
    j["tooltip"] = v.tooltip; 
    j["iconPath"] = v.iconPath; 
    j["subStyleBonus"] = v.subStyleBonus; 
    j["defaultPerks"] = v.defaultPerks; 
  }
  inline void from_json(const json& j, LolPerksPerkStyleResource& v) {
    v.isAdvanced = j.at("isAdvanced").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource>>(); 
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
  }
}