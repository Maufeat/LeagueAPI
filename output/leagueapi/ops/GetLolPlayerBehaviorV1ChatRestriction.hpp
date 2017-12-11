#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPlayerBehaviorRestrictionNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPlayerBehaviorRestrictionNotification> GetLolPlayerBehaviorV1ChatRestriction (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-player-behavior/v1/chat-restriction?", { 
    }, { 
    },"") };
  }
} 