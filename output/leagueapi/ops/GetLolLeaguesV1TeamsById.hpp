#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLeaguesLeagueTeam.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLeaguesLeagueTeam> GetLolLeaguesV1TeamsById (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-leagues/v1/teams/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 