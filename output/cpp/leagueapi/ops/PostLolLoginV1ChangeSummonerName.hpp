#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLoginV1ChangeSummonerName (const https::Info& _info_,
      const std::string& name /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/change-summoner-name?", { 
    }, { 
    },name) };
  }
} 