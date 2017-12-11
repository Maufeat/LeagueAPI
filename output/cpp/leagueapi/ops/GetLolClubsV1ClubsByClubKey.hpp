#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerClub.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerClub> GetLolClubsV1ClubsByClubKey (const https::Info& _info_,
      const std::string& clubKey /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?", { 
    }, { 
    }) };
  }
} 