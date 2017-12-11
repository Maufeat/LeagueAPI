#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/HighlightsConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<HighlightsConfig> GetLolHighlightsV1Config (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-highlights/v1/config?", { 
    }, { 
    },"") };
  }
} 