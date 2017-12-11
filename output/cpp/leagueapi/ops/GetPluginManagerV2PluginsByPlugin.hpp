#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PluginResource.hpp>

namespace leagueapi::op {
  /*Get diagnostic information for a single plugin.*/
  static https::Result<PluginResource> GetPluginManagerV2PluginsByPlugin (const https::Info& _info_,
      const std::string& plugin /*Plugin name*/ )
  { 
    return { https::Do(_info_, "get", "/plugin-manager/v2/plugins/"+to_string(plugin)+"?", { 
    }, { 
    }) };
  }
} 