#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Open swagger in the default browser.*/
  static https::Result<void> PostRiotclientShowSwagger (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riotclient/show-swagger?", { 
    }, { 
    },"") };
  }
} 