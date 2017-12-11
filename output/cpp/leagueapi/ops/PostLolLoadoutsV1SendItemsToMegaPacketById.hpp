#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLoadoutsV1SendItemsToMegaPacketById (const https::Info& _info_,
      const uint32_t& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-loadouts/v1/sendItemsToMegaPacket/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 