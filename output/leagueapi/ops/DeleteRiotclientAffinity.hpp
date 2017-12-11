#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Deletes the current runtime affinity of the application.*/
  static https::Result<void> DeleteRiotclientAffinity (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/riotclient/affinity?", { 
    }, { 
    },"") };
  }
} 