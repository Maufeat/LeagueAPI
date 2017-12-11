#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Adds/updates a common data key and value to be sent with every subsequent event.*/
  static https::Result<void> PostTelemetryV1CommonDataByKey (const https::Info& _info_,
      const std::string& key /*The name of the common data key*/,
      const std::string& value /*The value of the common data key*/ )
  { 
    return { https::Do(_info_, "post", "/telemetry/v1/common-data/"+to_string(key)+"?", { 
    }, { 
    },value) };
  }
} 