#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClubsPublicClubTag.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClubsPublicClubTag> GetLolClubsPublicV1ClubsPublicBySummonerIdTag (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"/tag?", { 
    }, { 
    },"") };
  }
} 