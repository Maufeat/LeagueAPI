#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolChatV1ConversationsNotify (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/conversations/notify?", { 
    }, { 
    },"") };
  }
} 