#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatFriendResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChatFriendResource>> GetLolChatV1Friends (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/friends?", { 
    }, { 
    },"") };
  }
} 