#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashPlaymodeRestrictedInfo.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashPlaymodeRestrictedInfo> GetLolClashV2PlaymodeRestricted (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v2/playmode-restricted?", { 
    }, { 
    },"") };
  }
} 