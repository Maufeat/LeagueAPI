#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterDetails { 
    std::string name;
    std::string shortName;
    int32_t iconId;
    int32_t iconColorId; 
  };
  inline void to_json(json& j, const LolClashRosterDetails& v) {
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["iconId"] = v.iconId; 
    j["iconColorId"] = v.iconColorId; 
  }
  inline void from_json(const json& j, LolClashRosterDetails& v) {
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
  }
}