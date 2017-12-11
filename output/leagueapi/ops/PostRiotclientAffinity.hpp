#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Sets the current runtime affinity of the application.*/
  static https::Result<void> PostRiotclientAffinity (const https::Info& _info_,
      const std::string& newAffinity /*The new affinity to use.*/ )
  { 
    return { https::Do(_info_, "post", "/riotclient/affinity?", { 
      { "newAffinity", https::to_string(newAffinity) },
    }, { 
    },"") };
  }
} 