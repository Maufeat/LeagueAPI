#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PersonalizedOffersLcdsClientDynamicConfigurationNotification { 
    bool delta;
    std::string configs; 
  };
  inline void to_json(json& j, const PersonalizedOffersLcdsClientDynamicConfigurationNotification& v) {
    j["delta"] = v.delta; 
    j["configs"] = v.configs; 
  }
  inline void from_json(const json& j, PersonalizedOffersLcdsClientDynamicConfigurationNotification& v) {
    v.delta = j.at("delta").get<bool>(); 
    v.configs = j.at("configs").get<std::string>(); 
  }
}