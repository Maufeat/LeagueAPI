#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> PostLolLootV1NewPlayerCheckDoneByNewValue (const https::Info& _info_,
      const bool& newValue /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-loot/v1/new-player-check-done/"+to_string(newValue)+"?", { 
    }, { 
    },"") };
  }
} 