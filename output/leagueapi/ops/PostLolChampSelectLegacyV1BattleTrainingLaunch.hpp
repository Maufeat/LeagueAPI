#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolChampSelectLegacyV1BattleTrainingLaunch (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-champ-select-legacy/v1/battle-training/launch?", { 
    }, { 
    },"") };
  }
} 