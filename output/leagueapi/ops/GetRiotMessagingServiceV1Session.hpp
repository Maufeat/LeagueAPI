#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RiotMessagingServiceSession.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RiotMessagingServiceSession> GetRiotMessagingServiceV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riot-messaging-service/v1/session?", { 
    }, { 
    },"") };
  }
} 