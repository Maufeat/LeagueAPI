#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV1TournamentsByIdJoin (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/tournaments/"+to_string(id)+"/join?", { 
    }, { 
    }) };
  }
} 