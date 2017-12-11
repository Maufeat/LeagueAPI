#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatBlockedPlayerResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolChatV1BlockedPlayers (const https::Info& _info_,
      const LolChatBlockedPlayerResource& blocked /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-chat/v1/blocked-players?", { 
    }, { 
    },blocked) };
  }
} 