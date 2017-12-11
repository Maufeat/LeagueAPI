#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PutLolLobbyV1PartiesReady (const https::Info& _info_,
      const int32_t& ready /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-lobby/v1/parties/ready?", { 
    }, { 
    },ready) };
  }
} 