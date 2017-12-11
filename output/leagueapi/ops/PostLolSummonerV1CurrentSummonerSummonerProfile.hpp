#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummonerProfileUpdate.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolSummonerV1CurrentSummonerSummonerProfile (const https::Info& _info_,
      const LolSummonerSummonerProfileUpdate& body /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-summoner/v1/current-summoner/summoner-profile?", { 
    }, { 
    },body) };
  }
} 