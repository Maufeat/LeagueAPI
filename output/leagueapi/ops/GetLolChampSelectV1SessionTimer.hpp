#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectTimer.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectChampSelectTimer> GetLolChampSelectV1SessionTimer (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/session/timer?", { 
    }, { 
    },"") };
  }
} 