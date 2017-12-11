#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameQueuesQueue.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameQueuesQueue> GetLolGameQueuesV1QueuesById (const https::Info& _info_,
      const int32_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-game-queues/v1/queues/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 