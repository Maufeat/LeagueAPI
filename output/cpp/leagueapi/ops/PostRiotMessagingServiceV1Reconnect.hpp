#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostRiotMessagingServiceV1Reconnect (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riot-messaging-service/v1/reconnect?", { 
    }, { 
    }) };
  }
} 