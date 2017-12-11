#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerClubMembership.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerClubMembership> DeleteLolClubsV1ClubsByClubKey (const https::Info& _info_,
      const std::string& clubKey /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?", { 
    }, { 
    },"") };
  }
} 