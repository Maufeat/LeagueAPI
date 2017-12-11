#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolLobbyV2Notifications (const https::Info& _info_,
      const LolLobbyLobbyNotification& notification /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/notifications?", { 
    }, { 
    },notification) };
  }
} 