#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RiotMessagingServicePluginRegionLocaleChangedEvent { 
    std::string region;
    std::string locale; 
  };
  void to_json(json& j, const RiotMessagingServicePluginRegionLocaleChangedEvent& v) {
  j["region"] = v.region; 
  j["locale"] = v.locale; 
  }
  void from_json(const json& j, RiotMessagingServicePluginRegionLocaleChangedEvent& v) {
  v.region = j.at("region").get<std::string>(); 
  v.locale = j.at("locale").get<std::string>(); 
  }
}