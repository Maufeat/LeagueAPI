#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolLobbyV2PartiesOverridesEnabled (const https::Info& _info_,
      const bool& enabled /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/parties/overrides/Enabled?", { 
      { "enabled", to_string(enabled) },
    }, { 
    }) };
  }
} 