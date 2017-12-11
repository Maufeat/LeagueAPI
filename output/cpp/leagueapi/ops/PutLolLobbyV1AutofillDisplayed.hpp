#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> PutLolLobbyV1AutofillDisplayed (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "put", "/lol-lobby/v1/autofill-displayed?", { 
    }, { 
    }) };
  }
} 