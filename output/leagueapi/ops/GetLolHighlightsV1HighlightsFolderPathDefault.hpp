#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolHighlightsV1HighlightsFolderPathDefault (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-highlights/v1/highlights-folder-path/default?", { 
    }, { 
    },"") };
  }
} 