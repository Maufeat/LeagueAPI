#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameQueuesQueue.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameQueuesQueue> GetLolGameQueuesV1QueuesTypeByQueueType (const https::Info& _info_,
      const std::string& queueType /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-game-queues/v1/queues/type/"+to_string(queueType)+"?", { 
    }, { 
    },"") };
  }
} 