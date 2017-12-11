#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/Highlight.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<Highlight>> PostLolHighlightsV1Highlights (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-highlights/v1/highlights?", { 
    }, { 
    },"") };
  }
} 