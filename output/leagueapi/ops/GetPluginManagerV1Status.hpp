#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PluginManagerResource.hpp>

namespace leagueapi::op {
  /*Get the status of the plugin manager.*/
  static https::Result<PluginManagerResource> GetPluginManagerV1Status (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/plugin-manager/v1/status?", { 
    }, { 
    },"") };
  }
} 