#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolPerksV1Pages (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-perks/v1/pages?", { 
    }, { 
    }) };
  }
} 