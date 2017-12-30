#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatPluginRegionLocaleChangedEvent { 
    std::string locale;
    std::string region; 
  };
  inline void to_json(json& j, const LolChatPluginRegionLocaleChangedEvent& v) {
    j["locale"] = v.locale; 
    j["region"] = v.region; 
  }
  inline void from_json(const json& j, LolChatPluginRegionLocaleChangedEvent& v) {
    v.locale = j.at("locale").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
  }
}