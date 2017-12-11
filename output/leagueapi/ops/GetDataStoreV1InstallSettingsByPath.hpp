#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Get the data for the specified key from the install settings.*/
  static https::Result<json> GetDataStoreV1InstallSettingsByPath (const https::Info& _info_,
      const std::string& path /*The path to the settings key*/ )
  { 
    return { https::Do(_info_, "get", "/data-store/v1/install-settings/"+to_string(path)+"?", { 
    }, { 
    },"") };
  }
} 