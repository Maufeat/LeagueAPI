#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<std::string>> GetLolGameClientChatV1Buddies (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-game-client-chat/v1/buddies?", { 
    }, { 
    },"") };
  }
} 