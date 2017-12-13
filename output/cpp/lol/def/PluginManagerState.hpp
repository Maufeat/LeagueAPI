#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PluginManagerState {  
    NotReady_e = 0,
    PluginsInitialized_e = 1,
  };
  void to_json(json& j, const PluginManagerState& v) {
    if(v == PluginManagerState::NotReady_e) {
      j = "NotReady";
      return;
    }
    if(v == PluginManagerState::PluginsInitialized_e) {
      j = "PluginsInitialized";
      return;
    }
  }
  void from_json(const json& j, PluginManagerState& v) {
    if(j.get<std::string>() == "NotReady") {
      v = PluginManagerState::NotReady_e;
      return;
    } 
    if(j.get<std::string>() == "PluginsInitialized") {
      v = PluginManagerState::PluginsInitialized_e;
      return;
    } 
  }
}