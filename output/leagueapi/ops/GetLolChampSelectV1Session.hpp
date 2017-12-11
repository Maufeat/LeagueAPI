#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectSession.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectChampSelectSession> GetLolChampSelectV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/session?", { 
    }, { 
    },"") };
  }
} 