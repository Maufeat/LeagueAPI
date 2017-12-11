#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatGroupResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChatGroupResource>> GetLolChatV1FriendGroups (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/friend-groups?", { 
    }, { 
    },"") };
  }
} 