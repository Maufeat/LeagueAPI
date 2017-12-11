#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectSession.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectLegacyChampSelectSession> GetLolChampSelectLegacyV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select-legacy/v1/session?", { 
    }, { 
    }) };
  }
} 