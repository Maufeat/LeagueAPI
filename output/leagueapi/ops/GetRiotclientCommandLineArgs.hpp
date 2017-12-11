#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Get the command line parameters for the application*/
  static https::Result<std::vector<std::string>> GetRiotclientCommandLineArgs (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/command-line-args?", { 
    }, { 
    },"") };
  }
} 