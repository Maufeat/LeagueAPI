#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolReplaysReplaysConfiguration.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolReplaysReplaysConfiguration> GetLolReplaysV1Configuration (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-replays/v1/configuration?", { 
    }, { 
    },"") };
  }
} 