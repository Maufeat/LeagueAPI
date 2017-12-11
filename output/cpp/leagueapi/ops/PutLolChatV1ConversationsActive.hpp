#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatActiveConversationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolChatV1ConversationsActive (const https::Info& _info_,
      const LolChatActiveConversationResource& activeConversation /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-chat/v1/conversations/active?", { 
    }, { 
    },activeConversation) };
  }
} 