#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMissionsPluginRegionLocaleChangedEvent { 
    std::string locale; 
  };
  inline void to_json(json& j, const LolMissionsPluginRegionLocaleChangedEvent& v) {
    j["locale"] = v.locale; 
  }
  inline void from_json(const json& j, LolMissionsPluginRegionLocaleChangedEvent& v) {
    v.locale = j.at("locale").get<std::string>(); 
  }
}