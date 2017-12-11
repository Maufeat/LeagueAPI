#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Update the region and locale.*/
  static https::Result<void> PostRiotclientSetRegionLocale (const https::Info& _info_,
      const std::string& region /*Name of the region.*/,
      const std::string& locale /*Name of the locale.*/ )
  { 
    return { https::Do(_info_, "post", "/riotclient/set_region_locale?", { 
      { "region", to_string(region) },
      { "locale", to_string(locale) },
    }, { 
    }) };
  }
} 