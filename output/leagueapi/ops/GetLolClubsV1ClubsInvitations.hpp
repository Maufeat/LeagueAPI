#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClubInvite.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<ClubInvite>> GetLolClubsV1ClubsInvitations (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs/v1/clubs/invitations?", { 
    }, { 
    },"") };
  }
} 