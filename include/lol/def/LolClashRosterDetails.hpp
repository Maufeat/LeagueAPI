#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterDetails { 
    int32_t iconColorId;
    std::string shortName;
    int32_t iconId;
    std::string name; 
  };
  inline void to_json(json& j, const LolClashRosterDetails& v) {
    j["iconColorId"] = v.iconColorId; 
    j["shortName"] = v.shortName; 
    j["iconId"] = v.iconId; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolClashRosterDetails& v) {
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}