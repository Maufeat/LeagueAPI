#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameQueuesQueueGameTypeConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameQueuesQueueGameTypeConfig> GetLolGameQueuesV1GameTypeConfigByGameTypeConfigIdMapByMapId (const https::Info& _info_,
      const uint32_t& gameTypeConfigId /**/,
      const int32_t& mapId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-game-queues/v1/game-type-config/"+to_string(gameTypeConfigId)+"/map/"+to_string(mapId)+"?", { 
    }, { 
    },"") };
  }
} 