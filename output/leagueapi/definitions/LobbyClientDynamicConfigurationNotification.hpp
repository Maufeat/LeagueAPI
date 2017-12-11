#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LobbyClientDynamicConfigurationNotification { /**/ 
    std::string configs;/**/
    bool delta;/**/
  };
  static void to_json(json& j, const LobbyClientDynamicConfigurationNotification& v) { 
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }
  static void from_json(const json& j, LobbyClientDynamicConfigurationNotification& v) { 
    v.configs = j.at("configs").get<std::string>(); 
    v.delta = j.at("delta").get<bool>(); 
  }
} 