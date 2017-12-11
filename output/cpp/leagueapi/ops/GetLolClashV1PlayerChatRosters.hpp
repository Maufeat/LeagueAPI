#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashPlayerChatRoster.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolClashPlayerChatRoster>> GetLolClashV1PlayerChatRosters (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/player/chat-rosters?", { 
    }, { 
    }) };
  }
} 