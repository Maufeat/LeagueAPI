#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPerksPerkUISlot.hpp>"
#include "<leagueapi/definitions/LolPerksPerkSubStyleBonusResource.hpp>"

namespace leagueapi {
  struct LolPerksPerkUIStyle { /**/ 
    std::vector<int32_t> defaultPerks;/**/
    int32_t defaultSubStyle;/**/
    std::vector<LolPerksPerkUISlot> slots;/**/
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;/**/
    std::string iconPath;/**/
    int32_t id;/**/
    std::string name;/**/
    std::string tooltip;/**/
    std::vector<int32_t> allowedSubStyles;/**/
    std::string defaultPageName;/**/
  };
  static void to_json(json& j, const LolPerksPerkUIStyle& v) { 
    j["defaultPerks"] = v.defaultPerks;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["slots"] = v.slots;
    j["subStyleBonus"] = v.subStyleBonus;
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
    j["name"] = v.name;
    j["tooltip"] = v.tooltip;
    j["allowedSubStyles"] = v.allowedSubStyles;
    j["defaultPageName"] = v.defaultPageName;
  }
  static void from_json(const json& j, LolPerksPerkUIStyle& v) { 
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>(); 
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>(); 
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot>>(); 
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.tooltip = j.at("tooltip").get<std::string>(); 
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>(); 
    v.defaultPageName = j.at("defaultPageName").get<std::string>(); 
  }
} 