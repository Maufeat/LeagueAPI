#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerAutoFillDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolSummonerAutoFillDto> GetLolSummonerV1CurrentSummonerAutofill (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v1/current-summoner/autofill?", { 
    }, { 
    },"") };
  }
} 