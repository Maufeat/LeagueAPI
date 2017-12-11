#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashRoster.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolClashRoster>> GetLolClashV1Invitations (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/invitations?", { 
    }, { 
    },"") };
  }
} 