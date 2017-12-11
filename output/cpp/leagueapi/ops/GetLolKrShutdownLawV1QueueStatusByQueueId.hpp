#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolKrShutdownLawQueueShutdownStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1QueueStatusByQueueId (const https::Info& _info_,
      const int32_t& queue_id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-kr-shutdown-law/v1/queue-status/"+to_string(queue_id)+"?", { 
    }, { 
    }) };
  }
} 