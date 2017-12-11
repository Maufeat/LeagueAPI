#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyLobbyNotification>> GetLolLobbyV2Notifications (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/notifications?", { 
    }, { 
    }) };
  }
} 