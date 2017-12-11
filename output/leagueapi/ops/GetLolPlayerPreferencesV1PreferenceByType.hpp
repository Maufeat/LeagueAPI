#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolPlayerPreferencesV1PreferenceByType (const https::Info& _info_,
      const std::string& type /**/ ,
      const std::optional<std::string>& hash = std::nullopt /**/)
  { 
    return { https::Do(_info_, "get", "/lol-player-preferences/v1/preference/"+to_string(type)+"?", { 
      { "hash", https::to_string(hash) },
    }, { 
    },"") };
  }
} 