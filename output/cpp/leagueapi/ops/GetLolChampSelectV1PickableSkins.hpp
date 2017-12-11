#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectPickableSkins.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectChampSelectPickableSkins> GetLolChampSelectV1PickableSkins (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/pickable-skins?", { 
    }, { 
    }) };
  }
} 