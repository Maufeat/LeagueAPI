#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Ux acknowledges the update to the region and locale.*/
  static https::Result<void> PutRiotclientRegionLocaleAck (const https::Info& _info_,
      const uint32_t& requestId /*The region and locale change requestId that is being acknowledged.*/ )
  { 
    return { https::Do(_info_, "put", "/riotclient/region-locale/ack?", { 
    }, { 
    },requestId) };
  }
} 