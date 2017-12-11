#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatActiveConversationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatActiveConversationResource> GetLolChatV1ConversationsActive (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/conversations/active?", { 
    }, { 
    }) };
  }
} 