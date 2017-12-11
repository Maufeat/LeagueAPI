#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyBotParams.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV1LobbyCustomBotsBySummonerInternalName (const https::Info& _info_,
      const std::string& summonerInternalName /**/,
      const LolLobbyLobbyBotParams& parameters /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/lobby/custom/bots/"+to_string(summonerInternalName)+"?", { 
    }, { 
    },parameters) };
  }
} 