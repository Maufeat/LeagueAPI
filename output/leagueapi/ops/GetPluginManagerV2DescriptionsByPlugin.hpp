#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PluginDescriptionResource.hpp>

namespace leagueapi::op {
  /*Get a plugin description.*/
  static https::Result<PluginDescriptionResource> GetPluginManagerV2DescriptionsByPlugin (const https::Info& _info_,
      const std::string& plugin /*Plugin name*/ )
  { 
    return { https::Do(_info_, "get", "/plugin-manager/v2/descriptions/"+to_string(plugin)+"?", { 
    }, { 
    },"") };
  }
} 