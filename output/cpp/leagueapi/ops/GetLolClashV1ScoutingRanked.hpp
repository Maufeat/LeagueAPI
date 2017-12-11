#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashRankedScoutingMember.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolClashRankedScoutingMember>> GetLolClashV1ScoutingRanked (const https::Info& _info_,
      const std::vector<uint64_t>& summonerIds /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/scouting/ranked?", { 
      { "summonerIds", to_string(summonerIds) },
    }, { 
    }) };
  }
} 