#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolGameflowV1WatchLaunch (const https::Info& _info_,
      const std::vector<std::string>& args /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/watch/launch?", { 
    }, { 
    },args) };
  }
} 