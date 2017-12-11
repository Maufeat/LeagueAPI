#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerClub.hpp>
#include <leagueapi/definitions/ClubName.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerClub> PostLolClubsV1ClubsMembership (const https::Info& _info_,
      const ClubName& name /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clubs/v1/clubs/membership?", { 
    }, { 
    },name) };
  }
} 