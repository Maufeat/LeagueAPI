#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMissionsPluginRegionLocaleChangedEvent { /**/ 
    std::string locale;/**/
  };
  static void to_json(json& j, const LolMissionsPluginRegionLocaleChangedEvent& v) { 
    j["locale"] = v.locale;
  }
  static void from_json(const json& j, LolMissionsPluginRegionLocaleChangedEvent& v) { 
    v.locale = j.at("locale").get<std::string>(); 
  }
} 