#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummoner.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolSummonerSummoner>> GetLolSummonerV2Summoners (const https::Info& _info_ ,
      const std::optional<std::string>& name = std::nullopt /**/,
      const std::optional<std::vector<uint64_t>>& ids = std::nullopt /**/)
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v2/summoners?", { 
      { "name", to_string(name) },
      { "ids", to_string(ids) },
    }, { 
    }) };
  }
} 