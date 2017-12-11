#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameQueuesQueueCustomGame.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameQueuesQueueCustomGame> GetLolGameQueuesV1CustomNonDefault (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-game-queues/v1/custom-non-default?", { 
    }, { 
    },"") };
  }
} 