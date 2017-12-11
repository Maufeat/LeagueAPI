#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksPerkPageResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPerksPerkPageResource> PostLolPerksV1Pages (const https::Info& _info_,
      const LolPerksPerkPageResource& page /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-perks/v1/pages?", { 
    }, { 
    },page) };
  }
} 