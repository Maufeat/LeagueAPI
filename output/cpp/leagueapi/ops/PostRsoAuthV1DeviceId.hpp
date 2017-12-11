#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthDeviceId.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthDeviceId> PostRsoAuthV1DeviceId (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/rso-auth/v1/device-id?", { 
    }, { 
    }) };
  }
} 