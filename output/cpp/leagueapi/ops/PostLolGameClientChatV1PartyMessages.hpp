#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameClientChatV1PartyMessages (const https::Info& _info_,
      const std::string& message /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-game-client-chat/v1/party-messages?", { 
      { "message", to_string(message) },
    }, { 
    }) };
  }
} 