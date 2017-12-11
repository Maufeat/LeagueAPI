#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSettingsSettingCategory.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolSettingsV2LocalByCategory (const https::Info& _info_,
      const std::string& category /**/,
      const LolSettingsSettingCategory& settingsResource /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-settings/v2/local/"+to_string(category)+"?", { 
    }, { 
    },settingsResource) };
  }
} 