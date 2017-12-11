#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId (const https::Info& _info_,
      const uint64_t& gameId /**/,
      const std::string& gameVersion /**/,
      const std::string& gameType /**/,
      const int32_t& queueId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-replays/v1/metadata/"+to_string(gameId)+"/create/gameVersion/"+to_string(gameVersion)+"/gameType/"+to_string(gameType)+"/queueId/"+to_string(queueId)+"?", { 
    }, { 
    }) };
  }
} 