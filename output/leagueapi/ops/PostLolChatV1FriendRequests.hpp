#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatFriendRequestResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolChatV1FriendRequests (const https::Info& _info_,
      const LolChatFriendRequestResource& request /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-chat/v1/friend-requests?", { 
    }, { 
    },request) };
  }
} 