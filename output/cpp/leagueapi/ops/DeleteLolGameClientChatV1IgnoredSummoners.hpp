#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteLolGameClientChatV1IgnoredSummoners (const https::Info& _info_,
      const std::string& summonerName /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-game-client-chat/v1/ignored-summoners?", { 
      { "summonerName", to_string(summonerName) },
    }, { 
    }) };
  }
} 