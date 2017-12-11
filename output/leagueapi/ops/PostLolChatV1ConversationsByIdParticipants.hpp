#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatUserResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolChatV1ConversationsByIdParticipants (const https::Info& _info_,
      const std::string& id /**/,
      const LolChatUserResource& invitee /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-chat/v1/conversations/"+to_string(id)+"/participants?", { 
    }, { 
    },invitee) };
  }
} 