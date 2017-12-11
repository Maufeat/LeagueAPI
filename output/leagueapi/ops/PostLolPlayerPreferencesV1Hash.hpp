#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> PostLolPlayerPreferencesV1Hash (const https::Info& _info_,
      const std::string& preferences /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-player-preferences/v1/hash?", { 
    }, { 
    },preferences) };
  }
} 