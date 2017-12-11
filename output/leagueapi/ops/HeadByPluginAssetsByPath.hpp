#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Download the header for a backend asset*/
  static https::Result<json> HeadByPluginAssetsByPath (const https::Info& _info_,
      const std::string& plugin /*Plugin name to serve from*/,
      const std::string& path /*Path to the asset to serve*/ ,
      const std::optional<std::string>& if_none_match = std::nullopt /*optional ETag of the asset that the caller has cached*/)
  { 
    return { https::Do(_info_, "head", "/"+to_string(plugin)+"/assets/"+to_string(path)+"?", { 
    }, { 
      { "if-none-match", https::to_string(if_none_match) },
    },"") };
  }
} 