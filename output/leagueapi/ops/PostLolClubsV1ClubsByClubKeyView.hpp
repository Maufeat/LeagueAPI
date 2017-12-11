#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClubsV1ClubsByClubKeyView (const https::Info& _info_,
      const std::string& clubKey /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/view?", { 
    }, { 
    },"") };
  }
} 