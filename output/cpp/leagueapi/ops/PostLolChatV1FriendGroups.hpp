#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatGroupResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolChatV1FriendGroups (const https::Info& _info_,
      const LolChatGroupResource& group /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-chat/v1/friend-groups?", { 
    }, { 
    },group) };
  }
} 