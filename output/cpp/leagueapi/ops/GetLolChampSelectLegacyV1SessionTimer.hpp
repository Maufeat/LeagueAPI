#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectTimer.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectLegacyChampSelectTimer> GetLolChampSelectLegacyV1SessionTimer (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select-legacy/v1/session/timer?", { 
    }, { 
    }) };
  }
} 