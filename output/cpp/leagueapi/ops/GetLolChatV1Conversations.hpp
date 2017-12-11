#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatConversationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChatConversationResource>> GetLolChatV1Conversations (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/conversations?", { 
    }, { 
    }) };
  }
} 