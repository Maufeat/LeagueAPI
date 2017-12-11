#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksPerkPageResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolPerksV1PagesById (const https::Info& _info_,
      const int32_t& id /**/,
      const LolPerksPerkPageResource& page /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-perks/v1/pages/"+to_string(id)+"?", { 
    }, { 
    },page) };
  }
} 