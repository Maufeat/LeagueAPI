#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RiotMessagingServiceState.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RiotMessagingServiceState> GetRiotMessagingServiceV1State (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riot-messaging-service/v1/state?", { 
    }, { 
    }) };
  }
} 