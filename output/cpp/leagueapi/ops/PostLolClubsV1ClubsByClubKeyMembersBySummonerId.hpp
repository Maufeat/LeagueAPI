#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerClub.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerClub> PostLolClubsV1ClubsByClubKeyMembersBySummonerId (const https::Info& _info_,
      const std::string& clubKey /**/,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/members/"+to_string(summonerId)+"?", { 
    }, { 
    }) };
  }
} 