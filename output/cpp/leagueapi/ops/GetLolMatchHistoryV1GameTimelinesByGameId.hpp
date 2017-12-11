#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryTimelineFrames.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMatchHistoryMatchHistoryTimelineFrames> GetLolMatchHistoryV1GameTimelinesByGameId (const https::Info& _info_,
      const uint64_t& gameId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-match-history/v1/game-timelines/"+to_string(gameId)+"?", { 
    }, { 
    }) };
  }
} 