#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatConversationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatConversationResource> PutLolChatV1ConversationsById (const https::Info& _info_,
      const std::string& id /**/,
      const LolChatConversationResource& updatedConversation /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-chat/v1/conversations/"+to_string(id)+"?", { 
    }, { 
    },updatedConversation) };
  }
} 