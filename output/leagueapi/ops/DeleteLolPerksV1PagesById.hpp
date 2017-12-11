#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolPerksV1PagesById (const https::Info& _info_,
      const int32_t& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-perks/v1/pages/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 