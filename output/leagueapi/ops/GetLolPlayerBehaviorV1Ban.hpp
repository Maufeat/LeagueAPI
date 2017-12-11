#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPlayerBehaviorBanNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPlayerBehaviorBanNotification> GetLolPlayerBehaviorV1Ban (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-player-behavior/v1/ban?", { 
    }, { 
    },"") };
  }
} 