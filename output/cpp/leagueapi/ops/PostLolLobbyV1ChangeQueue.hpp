#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobby.hpp>
#include <leagueapi/definitions/LolLobbyLobbyChangeQueue.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobby> PostLolLobbyV1ChangeQueue (const https::Info& _info_,
      const LolLobbyLobbyChangeQueue& queueId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/change-queue?", { 
    }, { 
    },queueId) };
  }
} 