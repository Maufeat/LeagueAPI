#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolReplaysReplayContextData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolReplaysV1RoflsByGameIdDownload (const https::Info& _info_,
      const uint64_t& gameId /**/,
      const LolReplaysReplayContextData& contextData /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-replays/v1/rofls/"+to_string(gameId)+"/download?", { 
    }, { 
    },contextData) };
  }
} 