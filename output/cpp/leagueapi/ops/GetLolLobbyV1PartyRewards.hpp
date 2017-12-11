#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyPartyRewards.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyPartyRewards> GetLolLobbyV1PartyRewards (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/party-rewards?", { 
    }, { 
    }) };
  }
} 