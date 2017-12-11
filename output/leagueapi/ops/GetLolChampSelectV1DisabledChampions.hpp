#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectDisabledChampions.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectChampSelectDisabledChampions> GetLolChampSelectV1DisabledChampions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/disabled-champions?", { 
    }, { 
    },"") };
  }
} 