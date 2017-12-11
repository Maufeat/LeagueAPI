#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameQueuesQueueGameTypeConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameQueuesQueueGameTypeConfig> GetLolGameQueuesV1GameTypeConfigByGameTypeConfigId (const https::Info& _info_,
      const uint32_t& gameTypeConfigId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-game-queues/v1/game-type-config/"+to_string(gameTypeConfigId)+"?", { 
    }, { 
    },"") };
  }
} 