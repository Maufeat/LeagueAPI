#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGeoinfoGeoInfoResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGeoinfoGeoInfoResponse> GetLolGeoinfoV1Whereami (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-geoinfo/v1/whereami?", { 
    }, { 
    },"") };
  }
} 