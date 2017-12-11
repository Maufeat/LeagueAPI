#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolGameflowV1SpectateLaunch (const https::Info& _info_ ,
      const std::optional<std::string>& summonerName = std::nullopt /**/)
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/spectate/launch?", { 
    }, { 
    },summonerName) };
  }
} 