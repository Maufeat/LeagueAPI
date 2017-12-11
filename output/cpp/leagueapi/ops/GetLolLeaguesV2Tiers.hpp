#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLeaguesParticipantTiers.hpp>
#include <leagueapi/definitions/LolLeaguesLeagueQueueType.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLeaguesParticipantTiers>> GetLolLeaguesV2Tiers (const https::Info& _info_,
      const std::vector<uint64_t>& summonerIds /**/,
      const std::vector<LolLeaguesLeagueQueueType>& queueTypes /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-leagues/v2/tiers?", { 
      { "summonerIds", to_string(summonerIds) },
      { "queueTypes", to_string(queueTypes) },
    }, { 
    }) };
  }
} 