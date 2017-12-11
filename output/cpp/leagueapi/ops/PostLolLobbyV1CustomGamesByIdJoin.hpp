#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyCustomJoinParameters.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV1CustomGamesByIdJoin (const https::Info& _info_,
      const uint64_t& id /**/,
      const LolLobbyLobbyCustomJoinParameters& parameters /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/custom-games/"+to_string(id)+"/join?", { 
    }, { 
    },parameters) };
  }
} 