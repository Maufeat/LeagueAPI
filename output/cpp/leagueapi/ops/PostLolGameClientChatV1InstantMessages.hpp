#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameClientChatV1InstantMessages (const https::Info& _info_,
      const std::string& summonerName /**/,
      const std::string& message /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-game-client-chat/v1/instant-messages?", { 
      { "summonerName", to_string(summonerName) },
      { "message", to_string(message) },
    }, { 
    }) };
  }
} 