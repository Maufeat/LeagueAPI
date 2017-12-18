#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SuggestedPlayersClientDynamicConfigurationNotification { 
    std::string configs;
    bool delta; 
  };
  inline void to_json(json& j, const SuggestedPlayersClientDynamicConfigurationNotification& v) {
    j["configs"] = v.configs; 
    j["delta"] = v.delta; 
  }
  inline void from_json(const json& j, SuggestedPlayersClientDynamicConfigurationNotification& v) {
    v.configs = j.at("configs").get<std::string>(); 
    v.delta = j.at("delta").get<bool>(); 
  }
}