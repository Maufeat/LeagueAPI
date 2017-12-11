#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolStoreV1LastPage (const https::Info& _info_,
      const std::string& pageType /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-store/v1/lastPage?", { 
    }, { 
    },pageType) };
  }
} 