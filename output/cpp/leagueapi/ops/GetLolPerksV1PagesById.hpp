#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksPerkPageResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPerksPerkPageResource> GetLolPerksV1PagesById (const https::Info& _info_,
      const int32_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/pages/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 