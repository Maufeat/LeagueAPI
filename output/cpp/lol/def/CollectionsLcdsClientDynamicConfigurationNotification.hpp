#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct CollectionsLcdsClientDynamicConfigurationNotification { 
    std::string configs;
    bool delta; 
  };
  inline void to_json(json& j, const CollectionsLcdsClientDynamicConfigurationNotification& v) {
    j["configs"] = v.configs; 
    j["delta"] = v.delta; 
  }
  inline void from_json(const json& j, CollectionsLcdsClientDynamicConfigurationNotification& v) {
    v.configs = j.at("configs").get<std::string>(); 
    v.delta = j.at("delta").get<bool>(); 
  }
}