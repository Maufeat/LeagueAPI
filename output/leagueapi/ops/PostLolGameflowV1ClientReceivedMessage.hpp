#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameflowV1ClientReceivedMessage (const https::Info& _info_,
      const std::string& messsage /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/client-received-message?", { 
    }, { 
    },messsage) };
  }
} 