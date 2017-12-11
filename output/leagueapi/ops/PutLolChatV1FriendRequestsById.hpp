#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatFriendRequestResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolChatV1FriendRequestsById (const https::Info& _info_,
      const uint64_t& id /**/,
      const LolChatFriendRequestResource& request /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-chat/v1/friend-requests/"+to_string(id)+"?", { 
    }, { 
    },request) };
  }
} 