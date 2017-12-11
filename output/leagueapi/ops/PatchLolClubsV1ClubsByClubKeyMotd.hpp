#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClubMOTD.hpp>
#include <leagueapi/definitions/PlayerClub.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerClub> PatchLolClubsV1ClubsByClubKeyMotd (const https::Info& _info_,
      const std::string& clubKey /**/,
      const ClubMOTD& motd /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/motd?", { 
    }, { 
    },motd) };
  }
} 