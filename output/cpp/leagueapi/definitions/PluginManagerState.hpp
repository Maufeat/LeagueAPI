#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PluginManagerState { /**/ 
    NotReady_e = 0, /**/ 
    PluginsInitialized_e = 1, /**/ 
  };
  static void to_json(json& j, const PluginManagerState& v) {
    switch(v) { 
    case PluginManagerState::NotReady_e:
      j = "NotReady";
    break;
    case PluginManagerState::PluginsInitialized_e:
      j = "PluginsInitialized";
    break;
    };
  }
  static void from_json(const json& j, PluginManagerState& v) {
    auto s = j.get<std::string>(); 
    if(s == "NotReady") {
      v = PluginManagerState::NotReady_e;
      return;
    } 
    if(s == "PluginsInitialized") {
      v = PluginManagerState::PluginsInitialized_e;
      return;
    } 
  }
} 