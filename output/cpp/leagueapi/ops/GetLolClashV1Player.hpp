#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashPlayerData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashPlayerData> GetLolClashV1Player (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/player?", { 
    }, { 
    }) };
  }
} 