#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClubMemberLists.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<ClubMemberLists> DeleteLolClubsV1ClubsByClubKeyMembersBySummonerId (const https::Info& _info_,
      const std::string& clubKey /**/,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/members/"+to_string(summonerId)+"?", { 
    }, { 
    },"") };
  }
} 