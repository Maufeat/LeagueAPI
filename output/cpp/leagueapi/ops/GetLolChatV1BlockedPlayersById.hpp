#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatBlockedPlayerResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatBlockedPlayerResource> GetLolChatV1BlockedPlayersById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/blocked-players/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 