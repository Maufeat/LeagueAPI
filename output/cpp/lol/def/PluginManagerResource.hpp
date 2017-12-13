#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PluginManagerState.hpp>
namespace lol {
  struct PluginManagerResource { 
    PluginManagerState state; 
  };
  void to_json(json& j, const PluginManagerResource& v) {
  j["state"] = v.state; 
  }
  void from_json(const json& j, PluginManagerResource& v) {
  v.state = j.at("state").get<PluginManagerState>(); 
  }
}