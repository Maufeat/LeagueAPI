#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPftPFTEvent.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolPftV2Events (const https::Info& _info_,
      const LolPftPFTEvent& pftEvent /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-pft/v2/events?", { 
    }, { 
    },pftEvent) };
  }
} 