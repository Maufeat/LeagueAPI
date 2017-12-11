#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoginSummonerCreatedResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLoginV1SummonerCreated (const https::Info& _info_,
      const LolLoginSummonerCreatedResource& summonerId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/summoner-created?", { 
    }, { 
    },summonerId) };
  }
} 