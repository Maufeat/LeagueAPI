#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatFriendResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatFriendResource> GetLolChatV1FriendsById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/friends/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 