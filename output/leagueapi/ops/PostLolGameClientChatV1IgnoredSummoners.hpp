#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameClientChatV1IgnoredSummoners (const https::Info& _info_,
      const std::string& summonerName /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-game-client-chat/v1/ignored-summoners?", { 
      { "summonerName", https::to_string(summonerName) },
    }, { 
    },"") };
  }
} 