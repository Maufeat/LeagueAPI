#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClashEventData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::map<std::string, ClashEventData>> PostLolClashV1Events (const https::Info& _info_,
      const std::vector<std::string>& uuids /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/events?", { 
    }, { 
    },uuids) };
  }
} 