#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Gets the current install directory (used internally.)*/
  static https::Result<std::string> GetDataStoreV1InstallDir (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/data-store/v1/install-dir?", { 
    }, { 
    },"") };
  }
} 