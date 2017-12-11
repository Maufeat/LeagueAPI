#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Download a backend asset*/
  static https::Result<json> GetByPluginAssetsByPath (const https::Info& _info_,
      const std::string& plugin /*Plugin name to serve from*/,
      const std::string& path /*Path to the asset to serve*/ ,
      const std::optional<std::string>& if_none_match = std::nullopt /*optional ETag of the asset that the caller has cached*/)
  { 
    return { https::Do(_info_, "get", "/"+to_string(plugin)+"/assets/"+to_string(path)+"?", { 
    }, { 
      { "if-none-match", to_string(if_none_match) },
    }) };
  }
} 