#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClubTag.hpp>
#include <leagueapi/definitions/PlayerClub.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerClub> PatchLolClubsV1ClubsByClubKey (const https::Info& _info_,
      const std::string& clubKey /**/,
      const ClubTag& tag /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"?", { 
    }, { 
    },tag) };
  }
} 