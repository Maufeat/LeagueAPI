#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyTeamBuilderV1MatchmakingLowPriorityQueueAbandon (const https::Info& _info_,
      const std::string& leaverBusterToken /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/v1/matchmaking/low-priority-queue/abandon?", { 
    }, { 
    },leaverBusterToken) };
  }
} 