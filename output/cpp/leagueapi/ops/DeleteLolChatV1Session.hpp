#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolChatV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-chat/v1/session?", { 
    }, { 
    }) };
  }
} 