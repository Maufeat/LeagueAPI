#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ServiceStatusResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<ServiceStatusResource> GetLolServiceStatusV1LcuStatus (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-service-status/v1/lcu-status?", { 
    }, { 
    },"") };
  }
} 