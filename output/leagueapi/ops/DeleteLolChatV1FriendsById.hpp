#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolChatV1FriendsById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-chat/v1/friends/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 