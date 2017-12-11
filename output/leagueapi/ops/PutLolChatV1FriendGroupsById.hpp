#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatGroupResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolChatV1FriendGroupsById (const https::Info& _info_,
      const uint32_t& id /**/,
      const LolChatGroupResource& group /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-chat/v1/friend-groups/"+to_string(id)+"?", { 
    }, { 
    },group) };
  }
} 