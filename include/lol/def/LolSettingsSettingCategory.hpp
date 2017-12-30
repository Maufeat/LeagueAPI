#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSettingsSettingCategory { 
    json data;
    int32_t schemaVersion; 
  };
  inline void to_json(json& j, const LolSettingsSettingCategory& v) {
    j["data"] = v.data; 
    j["schemaVersion"] = v.schemaVersion; 
  }
  inline void from_json(const json& j, LolSettingsSettingCategory& v) {
    v.data = j.at("data").get<json>(); 
    v.schemaVersion = j.at("schemaVersion").get<int32_t>(); 
  }
}