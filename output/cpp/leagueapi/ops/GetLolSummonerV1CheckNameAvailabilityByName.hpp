#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolSummonerV1CheckNameAvailabilityByName (const https::Info& _info_,
      const std::string& name /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v1/check-name-availability/"+to_string(name)+"?", { 
    }, { 
    }) };
  }
} 