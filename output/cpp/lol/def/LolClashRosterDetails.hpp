#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashRosterDetails { 
    std::string shortName;
    int32_t iconColorId;
    int32_t iconId;
    std::string name; 
  };
  void to_json(json& j, const LolClashRosterDetails& v) {
  j["shortName"] = v.shortName; 
  j["iconColorId"] = v.iconColorId; 
  j["iconId"] = v.iconId; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolClashRosterDetails& v) {
  v.shortName = j.at("shortName").get<std::string>(); 
  v.iconColorId = j.at("iconColorId").get<int32_t>(); 
  v.iconId = j.at("iconId").get<int32_t>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}