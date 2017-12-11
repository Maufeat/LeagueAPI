#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PluginResource.hpp>

namespace leagueapi::op {
  /*Get diagnostic information for all plugins.*/
  static https::Result<std::vector<PluginResource>> GetPluginManagerV2Plugins (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/plugin-manager/v2/plugins?", { 
    }, { 
    },"") };
  }
} 