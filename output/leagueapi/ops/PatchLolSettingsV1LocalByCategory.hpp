#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSettingsSettingCategory.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolSettingsV1LocalByCategory (const https::Info& _info_,
      const std::string& category /**/,
      const LolSettingsSettingCategory& settingsResource /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-settings/v1/local/"+to_string(category)+"?", { 
    }, { 
    },settingsResource) };
  }
} 