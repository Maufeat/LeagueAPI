#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/Highlight.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<Highlight> GetLolHighlightsV1HighlightsById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-highlights/v1/highlights/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 