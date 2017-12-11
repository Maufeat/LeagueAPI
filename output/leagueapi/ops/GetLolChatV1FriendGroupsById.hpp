#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatGroupResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatGroupResource> GetLolChatV1FriendGroupsById (const https::Info& _info_,
      const uint32_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/friend-groups/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 