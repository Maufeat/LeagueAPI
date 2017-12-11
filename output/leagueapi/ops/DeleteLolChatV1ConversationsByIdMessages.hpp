#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolChatV1ConversationsByIdMessages (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?", { 
    }, { 
    },"") };
  }
} 