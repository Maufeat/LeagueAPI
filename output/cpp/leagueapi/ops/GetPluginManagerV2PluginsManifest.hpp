#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Get the plugin manifest.*/
  static https::Result<json> GetPluginManagerV2PluginsManifest (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/plugin-manager/v2/plugins-manifest?", { 
    }, { 
    }) };
  }
} 