#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksPerkSubStyleBonusResource.hpp>
#include <lol/def/LolPerksPerkStyleSlotResource.hpp>
namespace lol {
  struct LolPerksPerkStyleResource { 
    int32_t defaultSubStyle;
    std::string tooltip;
    std::string iconPath;
    std::string defaultPageName;
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    std::vector<LolPerksPerkStyleSlotResource> slots;
    std::vector<int32_t> defaultPerks;
    std::string name;
    std::vector<int32_t> allowedSubStyles;
    int32_t id;
    bool isAdvanced; 
  };
  void to_json(json& j, const LolPerksPerkStyleResource& v) {
    j["defaultSubStyle"] = v.defaultSubStyle; 
    j["tooltip"] = v.tooltip; 
    j["iconPath"] = v.iconPath; 
    j["defaultPageName"] = v.defaultPageName; 
    j["subStyleBonus"] = v.subStyleBonus; 
    j["slots"] = v.slots; 
    j["defaultPerks"] = v.defaultPerks; 
    j["name"] = v.name; 
    j["allowedSubStyles"] = v.allowedSubStyles; 
    j["id"] = v.id; 
    j["isAdvanced"] = v.isAdvanced; 
  }
  void from_json(const json& j, LolPerksPerkStyleResource& v) {
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource>>(); 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.isAdvanced = j.at("isAdvanced").get<bool>(); 
  }
}