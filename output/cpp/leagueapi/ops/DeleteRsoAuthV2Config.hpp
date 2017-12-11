#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteRsoAuthV2Config (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/rso-auth/v2/config?", { 
    }, { 
    }) };
  }
} 