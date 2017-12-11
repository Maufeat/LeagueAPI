#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PluginDescriptionResource.hpp>

namespace leagueapi::op {
  /*Get all plugin descriptions.*/
  static https::Result<std::vector<PluginDescriptionResource>> GetPluginManagerV2Descriptions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/plugin-manager/v2/descriptions?", { 
    }, { 
    },"") };
  }
} 