#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClubsPublicClubsPublicData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClubsPublicClubsPublicData> GetLolClubsPublicV1ClubsPublicBySummonerId (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"?", { 
    }, { 
    },"") };
  }
} 