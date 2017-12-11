#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatChatServiceDynamicClientConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatChatServiceDynamicClientConfig> GetLolChatV1Config (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/config?", { 
    }, { 
    }) };
  }
} 