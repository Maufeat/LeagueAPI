#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostRiotMessagingServiceV1Connect (const https::Info& _info_,
      const std::string& idToken /**/ )
  { 
    return { https::Do(_info_, "post", "/riot-messaging-service/v1/connect?", { 
    }, { 
    },idToken) };
  }
} 