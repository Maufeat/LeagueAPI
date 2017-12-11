#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectBannableChampions.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectLegacyChampSelectBannableChampions> GetLolChampSelectLegacyV1BannableChampions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select-legacy/v1/bannable-champions?", { 
    }, { 
    }) };
  }
} 