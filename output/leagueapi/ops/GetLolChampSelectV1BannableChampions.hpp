#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectBannableChampions.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectChampSelectBannableChampions> GetLolChampSelectV1BannableChampions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/bannable-champions?", { 
    }, { 
    },"") };
  }
} 