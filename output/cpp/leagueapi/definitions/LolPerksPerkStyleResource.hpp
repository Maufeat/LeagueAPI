#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPerksPerkStyleSlotResource.hpp>
#include <leagueapi/definitions/LolPerksPerkSubStyleBonusResource.hpp>

namespace leagueapi {
  struct LolPerksPerkStyleResource { /**/ 
    std::vector<int32_t> defaultPerks;/**/
    int32_t defaultSubStyle;/**/
    std::vector<LolPerksPerkStyleSlotResource> slots;/**/
    bool isAdvanced;/**/
    std::string iconPath;/**/
    int32_t id;/**/
    std::string name;/**/
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;/**/
    std::string tooltip;/**/
    std::vector<int32_t> allowedSubStyles;/**/
    std::string defaultPageName;/**/
  };
  static void to_json(json& j, const LolPerksPerkStyleResource& v) { 
    j["defaultPerks"] = v.defaultPerks;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["slots"] = v.slots;
    j["isAdvanced"] = v.isAdvanced;
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
    j["name"] = v.name;
    j["subStyleBonus"] = v.subStyleBonus;
    j["tooltip"] = v.tooltip;
    j["allowedSubStyles"] = v.allowedSubStyles;
    j["defaultPageName"] = v.defaultPageName;
  }
  static void from_json(const json& j, LolPerksPerkStyleResource& v) { 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource>>(); 
    v.isAdvanced = j.at("isAdvanced").get<bool>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
  }
} 