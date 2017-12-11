#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatUserResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChatUserResource>> GetLolChatV1ConversationsByIdParticipants (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/conversations/"+to_string(id)+"/participants?", { 
    }, { 
    }) };
  }
} 