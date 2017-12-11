#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Set the data for the specified key from the install settings.*/
  static https::Result<void> PostDataStoreV1InstallSettingsByPath (const https::Info& _info_,
      const std::string& path /*The path to the settings key*/,
      const json& data /*The data to assign to the key*/ )
  { 
    return { https::Do(_info_, "post", "/data-store/v1/install-settings/"+to_string(path)+"?", { 
    }, { 
    },data) };
  }
} 