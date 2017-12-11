#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolAcsAcsEndPoint.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolAcsV1AcsEndpointOverride (const https::Info& _info_,
      const LolAcsAcsEndPoint& data /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-acs/v1/acs-endpoint-override?", { 
    }, { 
    },data) };
  }
} 