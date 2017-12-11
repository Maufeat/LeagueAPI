#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolClubsV1ClubsByClubKeyMotd (const https::Info& _info_,
      const std::string& clubKey /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/motd?", { 
    }, { 
    }) };
  }
} 