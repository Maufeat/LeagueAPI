#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PluginManagerState.hpp>

namespace leagueapi {
  struct PluginManagerResource { /**/ 
    PluginManagerState state;/**/
  };
  static void to_json(json& j, const PluginManagerResource& v) { 
    j["state"] = v.state;
  }
  static void from_json(const json& j, PluginManagerResource& v) { 
    v.state = j.at("state").get<PluginManagerState>(); 
  }
} 