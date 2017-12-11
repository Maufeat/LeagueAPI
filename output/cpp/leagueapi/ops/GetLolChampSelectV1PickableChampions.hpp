#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectPickableChampions.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectChampSelectPickableChampions> GetLolChampSelectV1PickableChampions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/pickable-champions?", { 
    }, { 
    }) };
  }
} 