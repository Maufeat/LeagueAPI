#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameQueuesQueue.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolGameQueuesQueue>> GetLolGameQueuesV1Queues (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-game-queues/v1/queues?", { 
    }, { 
    }) };
  }
} 