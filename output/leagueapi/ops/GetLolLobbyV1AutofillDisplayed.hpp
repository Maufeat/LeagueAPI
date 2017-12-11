#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolLobbyV1AutofillDisplayed (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/autofill-displayed?", { 
    }, { 
    },"") };
  }
} 