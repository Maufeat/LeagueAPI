#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginRegionLocaleChangedEvent { 
    std::string region;
    std::string locale; 
  };
  void to_json(json& j, const PluginRegionLocaleChangedEvent& v) {
  j["region"] = v.region; 
  j["locale"] = v.locale; 
  }
  void from_json(const json& j, PluginRegionLocaleChangedEvent& v) {
  v.region = j.at("region").get<std::string>(); 
  v.locale = j.at("locale").get<std::string>(); 
  }
}