#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyTeamBoost.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectLegacyTeamBoost> GetLolChampSelectLegacyV1TeamBoost (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select-legacy/v1/team-boost?", { 
    }, { 
    },"") };
  }
} 