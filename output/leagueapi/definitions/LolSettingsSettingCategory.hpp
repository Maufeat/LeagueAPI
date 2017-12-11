#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSettingsSettingCategory { /**/ 
    int32_t schemaVersion;/**/
    json data;/**/
  };
  static void to_json(json& j, const LolSettingsSettingCategory& v) { 
    j["schemaVersion"] = v.schemaVersion;
    j["data"] = v.data;
  }
  static void from_json(const json& j, LolSettingsSettingCategory& v) { 
    v.schemaVersion = j.at("schemaVersion").get<int32_t>(); 
    v.data = j.at("data").get<json>(); 
  }
} 