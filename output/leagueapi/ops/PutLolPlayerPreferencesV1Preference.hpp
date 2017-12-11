#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerPreferences.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolPlayerPreferencesV1Preference (const https::Info& _info_,
      const PlayerPreferences& preferences /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-player-preferences/v1/preference?", { 
    }, { 
    },preferences) };
  }
} 