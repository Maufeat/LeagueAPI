#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerPreferencesEndpoint.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolPlayerPreferencesV1PlayerPreferencesEndpointOverride (const https::Info& _info_,
      const PlayerPreferencesEndpoint& preferences /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-player-preferences/v1/player-preferences-endpoint-override?", { 
    }, { 
    },preferences) };
  }
} 