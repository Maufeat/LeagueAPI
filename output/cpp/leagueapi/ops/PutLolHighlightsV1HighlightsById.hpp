#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/Highlight.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<Highlight> PutLolHighlightsV1HighlightsById (const https::Info& _info_,
      const uint64_t& id /**/,
      const Highlight& highlight /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-highlights/v1/highlights/"+to_string(id)+"?", { 
    }, { 
    },highlight) };
  }
} 