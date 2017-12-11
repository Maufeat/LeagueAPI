#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Get the setting for the specified key.*/
  static https::Result<json> GetDataStoreV1SystemSettingsByPath (const https::Info& _info_,
      const std::string& path /*The path to the settings key*/ )
  { 
    return { https::Do(_info_, "get", "/data-store/v1/system-settings/"+to_string(path)+"?", { 
    }, { 
    }) };
  }
} 