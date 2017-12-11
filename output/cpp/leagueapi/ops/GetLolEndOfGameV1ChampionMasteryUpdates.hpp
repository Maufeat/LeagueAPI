#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolEndOfGameChampionMasteryUpdate.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolEndOfGameChampionMasteryUpdate> GetLolEndOfGameV1ChampionMasteryUpdates (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-end-of-game/v1/champion-mastery-updates?", { 
    }, { 
    }) };
  }
} 