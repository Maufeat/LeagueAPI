#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashEogPlayerUpdateDTO.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashEogPlayerUpdateDTO> GetLolClashV1EogPlayerUpdate (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/eogPlayerUpdate?", { 
    }, { 
    }) };
  }
} 