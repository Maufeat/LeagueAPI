#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/SummonerOrTeamAvailabilty.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<SummonerOrTeamAvailabilty> PostLolSpectatorV1BuddySpectate (const https::Info& _info_,
      const std::vector<std::string>& summonerOrTeamNames /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-spectator/v1/buddy/spectate?", { 
    }, { 
    },summonerOrTeamNames) };
  }
} 