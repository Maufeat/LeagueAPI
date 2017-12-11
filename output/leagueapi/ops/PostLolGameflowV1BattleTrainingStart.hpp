#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolGameflowV1BattleTrainingStart (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/battle-training/start?", { 
    }, { 
    },"") };
  }
} 