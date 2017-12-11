#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RegionLocale.hpp>

namespace leagueapi::op {
  /*Get the current region and locale.*/
  static https::Result<RegionLocale> GetRiotclientGetRegionLocale (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/get_region_locale?", { 
    }, { 
    }) };
  }
} 