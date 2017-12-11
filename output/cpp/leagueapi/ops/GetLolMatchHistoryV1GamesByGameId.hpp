#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryGame.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMatchHistoryMatchHistoryGame> GetLolMatchHistoryV1GamesByGameId (const https::Info& _info_,
      const uint64_t& gameId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-match-history/v1/games/"+to_string(gameId)+"?", { 
    }, { 
    }) };
  }
} 