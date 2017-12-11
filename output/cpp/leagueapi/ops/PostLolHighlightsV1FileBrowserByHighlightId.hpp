#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolHighlightsV1FileBrowserByHighlightId (const https::Info& _info_,
      const uint64_t& highlightId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-highlights/v1/file-browser/"+to_string(highlightId)+"?", { 
    }, { 
    }) };
  }
} 