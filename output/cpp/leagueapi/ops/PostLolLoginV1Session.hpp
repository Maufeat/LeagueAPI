#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoginUsernameAndPassword.hpp>
#include <leagueapi/definitions/LolLoginLoginSession.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLoginLoginSession> PostLolLoginV1Session (const https::Info& _info_,
      const LolLoginUsernameAndPassword& UsernameAndPassword /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/session?", { 
    }, { 
    },UsernameAndPassword) };
  }
} 