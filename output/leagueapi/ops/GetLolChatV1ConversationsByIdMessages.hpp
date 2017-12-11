#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatConversationMessageResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChatConversationMessageResource>> GetLolChatV1ConversationsByIdMessages (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?", { 
    }, { 
    },"") };
  }
} 