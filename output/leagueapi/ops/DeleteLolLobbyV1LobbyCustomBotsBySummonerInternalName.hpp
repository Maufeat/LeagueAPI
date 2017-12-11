#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLobbyV1LobbyCustomBotsBySummonerInternalName (const https::Info& _info_,
      const std::string& summonerInternalName /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-lobby/v1/lobby/custom/bots/"+to_string(summonerInternalName)+"?", { 
    }, { 
    },"") };
  }
} 