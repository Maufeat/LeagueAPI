#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolReplaysReplayMetadata.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolReplaysReplayMetadata> GetLolReplaysV1MetadataByGameId (const https::Info& _info_,
      const uint64_t& gameId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-replays/v1/metadata/"+to_string(gameId)+"?", { 
    }, { 
    }) };
  }
} 