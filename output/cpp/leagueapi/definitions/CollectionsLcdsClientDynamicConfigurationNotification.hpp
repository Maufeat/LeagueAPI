#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct CollectionsLcdsClientDynamicConfigurationNotification { /**/ 
    std::string configs;/**/
    bool delta;/**/
  };
  static void to_json(json& j, const CollectionsLcdsClientDynamicConfigurationNotification& v) { 
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }
  static void from_json(const json& j, CollectionsLcdsClientDynamicConfigurationNotification& v) { 
    v.configs = j.at("configs").get<std::string>(); 
    v.delta = j.at("delta").get<bool>(); 
  }
} 