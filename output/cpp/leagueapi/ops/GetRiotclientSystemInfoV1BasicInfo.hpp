#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/basicSystemInfo.hpp>

namespace leagueapi::op {
  /*Get basic system information: OS, memory, processor speed, and number of physical cores*/
  static https::Result<basicSystemInfo> GetRiotclientSystemInfoV1BasicInfo (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/system-info/v1/basic-info?", { 
    }, { 
    }) };
  }
} 