#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSuggestedPlayersSuggestedPlayersSuggestedPlayer.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>> GetLolSuggestedPlayersV1SuggestedPlayers (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-suggested-players/v1/suggested-players?", { 
    }, { 
    },"") };
  }
} 