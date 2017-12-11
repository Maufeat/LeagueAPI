#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RegionLocale.hpp>

namespace leagueapi::op {
  /*Get the current region and locale.*/
  static https::Result<RegionLocale> GetRiotclientRegionLocale (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/region-locale?", { 
    }, { 
    },"") };
  }
} 