#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClashEventData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<ClashEventData> GetLolClashV1EventByUuid (const https::Info& _info_,
      const std::string& uuid /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/event/"+to_string(uuid)+"?", { 
    }, { 
    },"") };
  }
} 