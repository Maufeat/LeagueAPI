#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Ux acknowledges the update to the Ux state.*/
  static https::Result<void> PutRiotclientUxStateAck (const https::Info& _info_,
      const uint32_t& requestId /*The ux change requestId that is being acknowledged.*/ )
  { 
    return { https::Do(_info_, "put", "/riotclient/ux-state/ack?", { 
    }, { 
    },requestId) };
  }
} 