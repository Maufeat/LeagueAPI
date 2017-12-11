#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatFriendRequestResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChatFriendRequestResource>> GetLolChatV1FriendRequests (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/friend-requests?", { 
    }, { 
    },"") };
  }
} 