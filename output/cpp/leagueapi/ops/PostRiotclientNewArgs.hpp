#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Endpoint for passing in new data.*/
  static https::Result<void> PostRiotclientNewArgs (const https::Info& _info_,
      const std::vector<std::string>& args /*Vector of new command line arguments*/ )
  { 
    return { https::Do(_info_, "post", "/riotclient/new-args?", { 
    }, { 
    }, { 
      { "args", to_string(args) },
    }, true ) };
  }
} 