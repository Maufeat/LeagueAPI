#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginRegionLocaleChangedEvent { 
    std::string locale;
    std::string region; 
  };
  void to_json(json& j, const PluginRegionLocaleChangedEvent& v) {
  j["locale"] = v.locale; 
  j["region"] = v.region; 
  }
  void from_json(const json& j, PluginRegionLocaleChangedEvent& v) {
  v.locale = j.at("locale").get<std::string>(); 
  v.region = j.at("region").get<std::string>(); 
  }
}