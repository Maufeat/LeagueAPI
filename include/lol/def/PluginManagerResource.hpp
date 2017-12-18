#pragma once
#include "../base_def.hpp" 
#include "PluginManagerState.hpp"
namespace lol {
  struct PluginManagerResource { 
    PluginManagerState state; 
  };
  inline void to_json(json& j, const PluginManagerResource& v) {
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, PluginManagerResource& v) {
    v.state = j.at("state").get<PluginManagerState>(); 
  }
}