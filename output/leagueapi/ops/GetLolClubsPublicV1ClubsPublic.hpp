#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClubsPublicClubsPublicData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolClubsPublicClubsPublicData>> GetLolClubsPublicV1ClubsPublic (const https::Info& _info_,
      const std::string& summonerNames /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs-public/v1/clubs/public?", { 
      { "summonerNames", https::to_string(summonerNames) },
    }, { 
    },"") };
  }
} 