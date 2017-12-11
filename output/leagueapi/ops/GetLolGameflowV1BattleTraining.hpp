#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolGameflowV1BattleTraining (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-gameflow/v1/battle-training?", { 
    }, { 
    },"") };
  }
} 