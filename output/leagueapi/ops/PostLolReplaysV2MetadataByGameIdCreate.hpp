#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolReplaysReplayCreateMetadata.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolReplaysV2MetadataByGameIdCreate (const https::Info& _info_,
      const uint64_t& gameId /**/,
      const LolReplaysReplayCreateMetadata& request /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-replays/v2/metadata/"+to_string(gameId)+"/create?", { 
    }, { 
    },request) };
  }
} 