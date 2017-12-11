#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RegionLocale.hpp>

namespace leagueapi::op {
  /*Update the region and locale.*/
  static https::Result<void> PutRiotclientRegionLocale (const https::Info& _info_,
      const RegionLocale& data /*Region and locale resource.*/ )
  { 
    return { https::Do(_info_, "put", "/riotclient/region-locale?", { 
    }, { 
    },data) };
  }
} 