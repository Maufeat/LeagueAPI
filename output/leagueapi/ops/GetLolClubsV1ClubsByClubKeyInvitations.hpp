#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClubMember.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<ClubMember>> GetLolClubsV1ClubsByClubKeyInvitations (const https::Info& _info_,
      const std::string& clubKey /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/invitations?", { 
    }, { 
    },"") };
  }
} 