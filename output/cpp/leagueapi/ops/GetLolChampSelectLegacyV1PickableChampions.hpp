#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectPickableChampions.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectLegacyChampSelectPickableChampions> GetLolChampSelectLegacyV1PickableChampions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select-legacy/v1/pickable-champions?", { 
    }, { 
    }) };
  }
} 