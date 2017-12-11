#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLeaguesSignedSummonerLeagueItemsDTO.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLeaguesSignedSummonerLeagueItemsDTO> GetLolLeaguesV2SummonerLeaguesCurrentSummonerSignedLeagues (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-leagues/v2/summoner-leagues/current-summoner/signed-leagues?", { 
    }, { 
    }) };
  }
} 