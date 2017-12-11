#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatConversationMessageResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatConversationMessageResource> PostLolChatV1ConversationsByIdMessages (const https::Info& _info_,
      const std::string& id /**/,
      const LolChatConversationMessageResource& body /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?", { 
    }, { 
    },body) };
  }
} 