#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPlayerBehaviorReformCard.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPlayerBehaviorReformCard> GetLolPlayerBehaviorV1ReformCard (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-player-behavior/v1/reform-card?", { 
    }, { 
    },"") };
  }
} 