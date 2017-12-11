#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolStoreV1ByPageType (const https::Info& _info_,
      const std::string& pageType /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/"+to_string(pageType)+"?", { 
    }, { 
    }) };
  }
} 