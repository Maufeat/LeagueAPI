#pragma once
#include "../base_def.hpp" 
#include "LolPerksPerkStyleSlotResource.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace lol {
  struct LolPerksPerkStyleResource { 
    std::string name;
    std::string iconPath;
    int32_t id;
    int32_t defaultSubStyle;
    std::vector<LolPerksPerkStyleSlotResource> slots;
    std::vector<int32_t> defaultPerks;
    std::string defaultPageName;
    bool isAdvanced;
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    std::string tooltip;
    std::vector<int32_t> allowedSubStyles; 
  };
  inline void to_json(json& j, const LolPerksPerkStyleResource& v) {
    j["name"] = v.name; 
    j["iconPath"] = v.iconPath; 
    j["id"] = v.id; 
    j["defaultSubStyle"] = v.defaultSubStyle; 
    j["slots"] = v.slots; 
    j["defaultPerks"] = v.defaultPerks; 
    j["defaultPageName"] = v.defaultPageName; 
    j["isAdvanced"] = v.isAdvanced; 
    j["subStyleBonus"] = v.subStyleBonus; 
    j["tooltip"] = v.tooltip; 
    j["allowedSubStyles"] = v.allowedSubStyles; 
  }
  inline void from_json(const json& j, LolPerksPerkStyleResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource>>(); 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
    v.isAdvanced = j.at("isAdvanced").get<bool>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
  }
}