#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolChatV1FriendGroupsById (const https::Info& _info_,
      const uint32_t& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-chat/v1/friend-groups/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 