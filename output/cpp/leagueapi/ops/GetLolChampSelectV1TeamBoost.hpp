#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectTeamBoost.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectTeamBoost> GetLolChampSelectV1TeamBoost (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/team-boost?", { 
    }, { 
    }) };
  }
} 