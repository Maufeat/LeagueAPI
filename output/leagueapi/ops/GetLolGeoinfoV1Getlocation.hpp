#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGeoinfoGeoInfo.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGeoinfoGeoInfo> GetLolGeoinfoV1Getlocation (const https::Info& _info_,
      const std::string& ip_address /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-geoinfo/v1/getlocation?", { 
      { "ip_address", https::to_string(ip_address) },
    }, { 
    },"") };
  }
} 