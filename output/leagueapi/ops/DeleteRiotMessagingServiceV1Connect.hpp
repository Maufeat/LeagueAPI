#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteRiotMessagingServiceV1Connect (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/riot-messaging-service/v1/connect?", { 
    }, { 
    },"") };
  }
} 