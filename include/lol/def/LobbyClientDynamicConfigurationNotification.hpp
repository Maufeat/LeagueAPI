#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LobbyClientDynamicConfigurationNotification { 
    bool delta;
    std::string configs; 
  };
  inline void to_json(json& j, const LobbyClientDynamicConfigurationNotification& v) {
    j["delta"] = v.delta; 
    j["configs"] = v.configs; 
  }
  inline void from_json(const json& j, LobbyClientDynamicConfigurationNotification& v) {
    v.delta = j.at("delta").get<bool>(); 
    v.configs = j.at("configs").get<std::string>(); 
  }
}