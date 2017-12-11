#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSuggestedPlayersSuggestedPlayersVictoriousComrade.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolSuggestedPlayersV1VictoriousComrade (const https::Info& _info_,
      const LolSuggestedPlayersSuggestedPlayersVictoriousComrade& resource /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-suggested-players/v1/victorious-comrade?", { 
    }, { 
    },resource) };
  }
} 