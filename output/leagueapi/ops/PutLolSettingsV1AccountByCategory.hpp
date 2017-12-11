#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSettingsSettingCategory.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolSettingsV1AccountByCategory (const https::Info& _info_,
      const std::string& category /**/,
      const LolSettingsSettingCategory& settingsResource /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-settings/v1/account/"+to_string(category)+"?", { 
    }, { 
    },settingsResource) };
  }
} 