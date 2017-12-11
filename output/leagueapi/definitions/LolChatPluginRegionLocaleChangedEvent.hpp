#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatPluginRegionLocaleChangedEvent { /**/ 
    std::string locale;/**/
    std::string region;/**/
  };
  static void to_json(json& j, const LolChatPluginRegionLocaleChangedEvent& v) { 
    j["locale"] = v.locale;
    j["region"] = v.region;
  }
  static void from_json(const json& j, LolChatPluginRegionLocaleChangedEvent& v) { 
    v.locale = j.at("locale").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
  }
} 