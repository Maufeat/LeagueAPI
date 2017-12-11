#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolPlayerPreferencesV1PlayerPreferencesReady (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-player-preferences/v1/player-preferences-ready?", { 
    }, { 
    },"") };
  }
} 