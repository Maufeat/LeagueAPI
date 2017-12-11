#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatFriendResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChatFriendResource>> GetLolChatV1FriendGroupsByIdFriends (const https::Info& _info_,
      const uint32_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/friend-groups/"+to_string(id)+"/friends?", { 
    }, { 
    },"") };
  }
} 