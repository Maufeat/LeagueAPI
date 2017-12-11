#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatFriendResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolChatV1FriendsById (const https::Info& _info_,
      const uint64_t& id /**/,
      const LolChatFriendResource& contact /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-chat/v1/friends/"+to_string(id)+"?", { 
    }, { 
    },contact) };
  }
} 